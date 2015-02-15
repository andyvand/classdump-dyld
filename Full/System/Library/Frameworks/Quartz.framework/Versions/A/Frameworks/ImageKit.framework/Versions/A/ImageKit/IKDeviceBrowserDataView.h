/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class IKUIHelper, NSImageView, NSTextField, NSButton, NSProgressIndicator, NSString;

@interface IKDeviceBrowserDataView : NSTableCellView {

	IKUIHelper* uiHelper;
	NSImageView* deviceIcon;
	NSTextField* deviceInfo;
	NSTextField* extraInfo;
	id representedObject;
	NSButton* ejectButton;
	NSButton* lockButton;
	NSProgressIndicator* busySpinner;
	NSProgressIndicator* progresIndicator;
	char showLocation;
	id buttonTarget;
	SEL buttonAction;
	NSString* extaInfoStringNormal;
	NSString* extaInfoStringAlternate;

}

@property (nonatomic,retain) NSImageView * deviceIcon; 
@property (nonatomic,retain) NSTextField * deviceInfo; 
@property (nonatomic,retain) NSTextField * extraInfo; 
@property (nonatomic,retain) NSButton * ejectButton; 
@property (nonatomic,retain) NSButton * lockButton; 
@property (nonatomic,retain) NSProgressIndicator * progresIndicator; 
@property (nonatomic,retain) NSProgressIndicator * busySpinner; 
@property (nonatomic,retain) id representedObject; 
@property (assign,nonatomic) char showLocation; 
@property (copy) NSString * extaInfoStringNormal; 
@property (copy) NSString * extaInfoStringAlternate; 
-(NSTextField *)extraInfo;
-(void)updateView;
-(char)useAquaTheme;
-(CGRect)defaultRectForIdentifier:(id)arg1 ;
-(unsigned long long)controlSizeForIdentifier:(id)arg1 ;
-(void)removeObservers:(id)arg1 ;
-(void)addObservers:(id)arg1 ;
-(void)setDeviceIcon:(NSImageView *)arg1 ;
-(void)setButtonAction:(SEL)arg1 target:(id)arg2 ;
-(NSImageView *)deviceIcon;
-(void)deviceBrowserViewFlagsChanged:(id)arg1 ;
-(char)showLocation;
-(void)setExtaInfoStringNormal:(NSString *)arg1 ;
-(void)setExtaInfoStringAlternate:(NSString *)arg1 ;
-(NSString *)extaInfoStringAlternate;
-(NSString *)extaInfoStringNormal;
-(void)adjustUIToICDevice:(id)arg1 ;
-(void)updateDeviceBusy:(id)arg1 ;
-(id)extraInfoForDevice:(id)arg1 ;
-(void)addItemsToContextMenu:(id)arg1 ;
-(NSTextField *)deviceInfo;
-(void)setDeviceInfo:(NSTextField *)arg1 ;
-(void)setExtraInfo:(NSTextField *)arg1 ;
-(NSButton *)ejectButton;
-(void)setEjectButton:(NSButton *)arg1 ;
-(NSProgressIndicator *)busySpinner;
-(void)setBusySpinner:(NSProgressIndicator *)arg1 ;
-(void)setShowLocation:(char)arg1 ;
-(void)setLockButton:(NSButton *)arg1 ;
-(NSProgressIndicator *)progresIndicator;
-(void)setProgresIndicator:(NSProgressIndicator *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)buttonPressed:(id)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)awakeFromNib;
-(NSButton *)lockButton;
-(void)setup;
@end

