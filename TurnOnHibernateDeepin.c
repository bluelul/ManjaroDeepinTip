// STEP 1: Create Swap partition (cannot use swap file for hibernate)
	// #1: We can see if the system has any configured swap by typing:
		sudo swapon -s
		// If you only get back the header of the table, as I've shown above, you do not currently have any swap space enabled.
	// #2: Create a swap partition (Use Gparted), as sample: /dev/sda7
	// #3: 
		sudo swapon /dev/sda7
	// #4: Verify swap is actually on:
		sudo swapon -s
	// #5: Make the Swap File Permanent for every boot sequence:
		sudo nano /etc/fstab 
		// add this line in the end of fstab file
		/dev/sda7   none    swap    sw    0   0

// STEP 2: Enable hibernate function in Manjaro (also the icon in power menu)
	// #1:config initramfs option
		sudo nano /etc/mkinitcpio.conf 
		// add "resume" to HOOK flag as below:
		HOOKS="base udev autodetect modconf block resume keyboard keymap filesystems"
	// #2: Rebuild initramfs for all kernel
		sudo mkinitcpio -P

// STEP 3: Config grub menu
	sudo nano /etc/default/grub
	// add "resume=/dev/sda7" to GRUB_CMDLINE_LINUX_DEFAULT flag as below:
	GRUB_CMDLINE_LINUX_DEFAULT="quiet resume=/dev/sda7"

// STEP 4: REBOOT, we has done

// June 3rd 2019
// lttung1197
