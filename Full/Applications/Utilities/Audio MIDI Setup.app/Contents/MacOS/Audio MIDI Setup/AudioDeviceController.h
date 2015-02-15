/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:43:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Audio MIDI Setup.app/Contents/MacOS/Audio MIDI Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Audio MIDI Setup/Audio MIDI Setup-Structs.h>
#import <Audio MIDI Setup/NSComboBoxDelegate.h>
#import <Audio MIDI Setup/NSMenuDelegate.h>

@class AMSPopupButton, NSComboBox, NSPopUpButton, NSBox, NSScrollView, NSView, AudioDeviceChannelPropertiesTable, MessageView, NSMutableDictionary, NSString;

@interface AudioDeviceController : NSObject <NSComboBoxDelegate, NSMenuDelegate> {

	AMSPopupButton* uiStreamPopUp;
	AMSPopupButton* uiDataSourcePopUp;
	NSComboBox* uiSampleRateComboBox;
	NSPopUpButton* uiStreamFormatPopUp;
	NSBox* uiDeviceBox;
	NSScrollView* uiDeviceTableViewScroller;
	double bottomBorder;
	NSView* uiEnabledView;
	AudioDeviceChannelPropertiesTable* uiAudioDeviceChannelPropertiesTable;
	MessageView* mDisabledView;
	unsigned mAudioDeviceScope;
	unsigned char mAudioDeviceSection;
	NSMutableDictionary* mAudioFormatNameDictionary;
	CAAudioHardwareDevice* mCurrentDevice;
	CAAudioHardwareStream* mCurrentStream;
	int mSelectedStreamIndex;
	char streamFormatSelected;
	char streamFormatNeedsUpdating;
	vector<CAStreamBasicDescription, std::__1::allocator<CAStreamBasicDescription> >* mStreamVector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)populateSampleRateList:(id)arg1 forDevice:(unsigned)arg2 scope:(unsigned)arg3 ;
+(void)privAddSampleRate:(double)arg1 toList:(id)arg2 ;
+(void)privSynchronizeUIWithSampleRate:(id)arg1 deviceID:(unsigned)arg2 scope:(unsigned)arg3 ;
+(void)popupRateChanged:(id)arg1 forDevice:(unsigned)arg2 scope:(unsigned)arg3 ;
-(void)execute:(CAAudioHardwareStream*)arg1 forChannel:(unsigned)arg2 forProperty:(unsigned)arg3 ;
-(int)audioDevicePropertyChanged:(unsigned)arg1 property:(unsigned)arg2 forChannel:(unsigned)arg3 isInput:(char)arg4 ;
-(id)privGetFormatNameStringForOSType:(unsigned)arg1 ;
-(void)privSynchronizeUIWithStreamFormat;
-(void)privPopulateStreamFormatsPopUp;
-(void)privSynchronizeUIWithDataSource;
-(void)privPopulateDataSourcesPopUp;
-(void)privPopulateSampleRateList;
-(void)privPopulateStreamPopUp;
-(void)privSynchronizeUIWithStream;
-(void)privSynchronizeUIForNewDevice;
-(void)streamFormatPopUpWillAppear:(id)arg1 ;
-(void)iaSampleRateChanged:(id)arg1 ;
-(void)privControllerEnableSwapOld:(id)arg1 withNew:(id)arg2 ;
-(void)setCurrentDevice:(const CAAudioHardwareDevice*)arg1 ;
-(CAAudioHardwareDevice*)getCurrentDevice;
-(void)iaStreamSelectionChanged:(id)arg1 ;
-(void)iaDataSourceChanged:(id)arg1 ;
-(void)iaStreamFormatChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)awakeFromNib;
-(void)menuDidClose:(id)arg1 ;
-(void)comboBoxWillDismiss:(id)arg1 ;
@end
