
sx, sy, tx, ty = map(int, input().split())
dx, dy = tx-sx, ty-sy
ans = "UD"[dy<0]*dy + "RL"[dx<0]*dx + "UD"[dy>0]*dy
dx += 1;dy += 1
print(ans + "RL"[dx>0]*dx + "UD"[dy<0]*dy + "RL"[dx<0]*dx + "UD"[dy>0] + "RL"[dx<0] + "UD"[dy>0]*dy + "RL"[dx>0]*dx + "UD"[dy<0])
