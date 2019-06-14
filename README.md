# Manjaro Deepin Tip
Tip and Tweak to make Manjaro Deepin the best Linux distro ever

> lttung1197

## Waiting for another package manager to quit
```
Delete /var/lib/pacman/db.lck
```

## Teamviewer: not ready please check your connection
```
sudo systemctl enable teamviewerd
```

## Linux change Window time:
```
timedatectl set-local-rtc 1 --adjust-system-clock
```

## Tab auto-completion case-insensitive in Bash?
```
echo set completion-ignore-case on | sudo tee -a /etc/inputrc
```
