/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Keyboard.prefPane/Contents/MacOS/Keyboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Keyboard/Keyboard-Structs.h>
@class NSTimer, BluetoothHIDDeviceController, BatteryControl, NSTextField, NSButton, NSWindow, NSProgressIndicator, NSTableView, NSView, NSArrayController, NSImageView, IOBluetoothDevicePairViewController, IOBluetoothDevice, IOBluetoothDeviceInquiry, NSImage;

@interface BTKeyboardController : NSObject {

	NSTimer* mBatteryFastTimer;
	NSTimer* mBatteryCheckTimer;
	BluetoothHIDDeviceController* mBTDeviceController;
	BatteryControl* mBTBatteryControl;
	NSTextField* mBTBatteryControlLabel;
	NSTextField* mBTBatteryLabel;
	NSButton* mLowBTBatteryButton;
	NSWindow* mLowBTBatteryWindow;
	NSTextField* mTopLabel;
	NSTextField* mTopDescriptionLabel;
	NSTextField* mMiddleLabel;
	NSButton* mBackButton;
	NSButton* mContinueButton;
	NSTextField* mIndicatorLabel;
	NSProgressIndicator* mProgressIndicator;
	NSTableView* mDeviceTable;
	NSView* mBTWarningView;
	NSTextField* mBTWarningLabel;
	NSArrayController* mBTKeyboardList;
	NSImageView* mBTKeyboardGlyph;
	IOBluetoothDevicePairViewController* mBTDevicePairViewController;
	IOBluetoothDevice* mSelectedDevice;
	long long mSDPQueryAttemptsCount;
	IOBluetoothDeviceInquiry* mDeviceInquiry;
	NSImage* mBTAlertIconImage;
	int mErrorState;
	char mWaitingForPINCodeMatch;
	char mPerformingSDPQuery;
	char mEnableLogs;
	char mBTPowerIsOn;
	OpaqueIOBluetoothNotificationRefRef mIOBluetoothPowerOnNotificationRef;
	OpaqueIOBluetoothNotificationRefRef mIOBluetoothPowerOffNotificationRef;

}

@property (readonly) NSButton * backButton; 
@property (readonly) NSButton * lowBTBatteryButton; 
-(void)_adjustButtonPositions;
-(void)_adjustLabelPositions;
-(void)_startPairing:(id)arg1 ;
-(void)stopSearch;
-(void)lowBatterySheetDone:(id)arg1 ;
-(void)lowBatteryHelp:(id)arg1 ;
-(void)_showErrorState:(int)arg1 ;
-(void)_checkBatteryTimer:(id)arg1 ;
-(void)_updateBTDevice:(id)arg1 ;
-(void)_startDeviceInquiry;
-(NSButton *)lowBTBatteryButton;
-(void)lowBatteryButton:(id)arg1 ;
-(void)_setBTPower:(char)arg1 ;
-(void)resetSearch;
-(void)beginSearch;
-(void)continueButton:(id)arg1 ;
-(NSButton *)backButton;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(void)deviceInquiryStarted:(id)arg1 ;
-(void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2 ;
-(void)deviceInquiryUpdatingDeviceNamesStarted:(id)arg1 devicesRemaining:(unsigned)arg2 ;
-(void)deviceInquiryDeviceNameUpdated:(id)arg1 device:(id)arg2 devicesRemaining:(unsigned)arg3 ;
-(void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(char)arg3 ;
-(void)devicePairingStarted:(id)arg1 ;
-(void)devicePairingConnecting:(id)arg1 ;
-(void)devicePairingPINCodeRequest:(id)arg1 ;
-(void)devicePairingFinished:(id)arg1 error:(int)arg2 ;
-(void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)awakeFromNib;
-(void)done:(id)arg1 ;
-(void)_updateUI;
-(void)lazyInit;
@end
