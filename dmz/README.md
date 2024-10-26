# DMZ Directory

## Overview
The DMZ (Demilitarized Zone) directory includes scripts and configurations that help in setting up and monitoring a secure DMZ for the Kirebos Networks project.

## Structure
- `config/`: Contains `dmz_config.yaml` which holds all DMZ-specific configurations like firewall rules and port forwarding settings.
- `scripts/`: Includes scripts such as `init_dmz.sh` for initializing DMZ settings and `monitor_dmz.py` for ongoing monitoring of DMZ activities.
- `logs/`: Stores logs generated by DMZ activities to aid in security audits and troubleshooting.

## Scripts
- `init_dmz.sh`: Run this script to apply initial DMZ configurations upon setup or after any configuration changes.
- `monitor_dmz.py`: This script should be run continuously to monitor DMZ health and security.

## Usage
Review and modify the configurations in `dmz_config.yaml` according to your network requirements. Regularly check the logs for any unusual activities.
