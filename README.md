# ThreatLens — Cybersecurity Awareness Dashboard

ThreatLens is a responsive cybersecurity operations dashboard for learning about incident triage, severity, security posture, and response workflows. Built with HTML, CSS, and JavaScript, with a C-language extension exercise.

## Features
- Simulated security overview with risk score and incident counts
- Incident queue with severity filters and resolve/reopen actions
- Local demo scan that creates synthetic alerts only
- Security posture indicators and recommended best practices
- Activity log and learning checklist
- Responsive mobile and desktop UI
- No external API calls, network scans, or real security monitoring

## Run locally
Open `index.html` in a browser, or publish the repository using GitHub Pages: **Settings → Pages → Deploy from a branch → your default branch → /(root) → Save**.

## C extension
`event_analyzer.c` is a standalone learning exercise that parses simple sample log lines and counts event categories. Compile with:
```bash
gcc -std=c11 -Wall -Wextra event_analyzer.c -o event_analyzer
./event_analyzer sample.log
```

## Safety note
This is a portfolio/educational simulation. The dashboard does not inspect devices, scan networks, detect real threats, or connect to threat feeds. All displayed indicators are illustrative sample data.
