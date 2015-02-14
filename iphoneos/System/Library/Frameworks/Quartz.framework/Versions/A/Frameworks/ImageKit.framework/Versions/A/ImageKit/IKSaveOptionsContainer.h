/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>
#import <ImageKit/NSTextFieldDelegate.h>

@class IKUIHelper, IKSaveOptionsHandler, NSTextField, NSPopUpButton, NSSlider, NSButton, IKFileFormat, NSString;

@interface IKSaveOptionsContainer : NSView <NSTextFieldDelegate> {

	IKUIHelper* _uiHelper;
	IKSaveOptionsHandler* saveOptionsHandler;
	NSTextField* formatLabel;
	NSPopUpButton* formatPopup;
	NSTextField* bitDepthLabel;
	NSPopUpButton* bitDepthPopup;
	NSTextField* quartzFilterLabel;
	NSPopUpButton* quartzFilterPopup;
	NSTextField* compressionLabel;
	NSPopUpButton* compressionPopup;
	NSTextField* qualityLabel;
	NSSlider* qualitySlider;
	NSTextField* qualitySliderMinLabel;
	NSTextField* qualitySliderMaxLabel;
	NSTextField* alphaLabel;
	NSButton* alphaCheckbox;
	NSTextField* exifOrientationLabel;
	NSButton* exifOrientationCheckbox;
	NSTextField* encryptLabel;
	NSButton* encryptCheckbox;
	NSTextField* encryptPassword1Label;
	NSTextField* encryptPassword1;
	NSTextField* encryptPassword2Label;
	NSTextField* encryptPassword2;
	NSTextField* encryptPasswordWarningLabel;
	NSTextField* encryptPasswordWarning;
	NSTextField* rasterizeDPILabel;
	NSTextField* rasterizeDPI;
	NSPopUpButton* rasterizeDPIUnit;
	NSTextField* movieSizeLabel;
	NSPopUpButton* movieSizePopup;
	NSTextField* fileSizeLabel;
	NSTextField* fileSize;
	IKFileFormat* currentFileFormat;
	char userSelectedAlpha;
	long long userSelectedBitDepth;
	char showsOrientationCheckbox;

}

@property (assign) IKSaveOptionsHandler * saveOptionsHandler; 
@property (assign) IKFileFormat * currentFileFormat; 
@property (readonly) NSButton * exifOrientationCheckbox; 
@property (readonly) NSTextField * fileSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupViews;
-(void)setSaveOptionsHandler:(IKSaveOptionsHandler *)arg1 ;
-(void)createViews;
-(void)adjustToFileFormat:(id)arg1 ;
-(void)updateFileFormats;
-(void)updateUserSelection:(id)arg1 forImageProperties:(char)arg2 ;
-(void)setShowOrientationCheckbox:(char)arg1 ;
-(NSButton *)exifOrientationCheckbox;
-(char)useAquaTheme;
-(CGRect)defaultRectForIdentifier:(id)arg1 ;
-(unsigned long long)controlSizeForIdentifier:(id)arg1 ;
-(void)updateBitDepthPopup;
-(void)updateNextKeyViews;
-(void)formatPopupWillPopup:(id)arg1 ;
-(void)compressionPopupWillPopup:(id)arg1 ;
-(IKSaveOptionsHandler *)saveOptionsHandler;
-(void)fileFormatChanged:(id)arg1 ;
-(void)bitDepthChanged:(id)arg1 ;
-(void)quartzFilterChanged:(id)arg1 ;
-(void)compressionChanged:(id)arg1 ;
-(void)exifOrientationCheckboxChanged:(id)arg1 ;
-(void)alphaCheckboxChanged:(id)arg1 ;
-(void)encryptCheckboxChanged:(id)arg1 ;
-(void)rasterizeDPIUnitChanged:(id)arg1 ;
-(void)qualityChanged:(id)arg1 ;
-(void)movieSizeChanged:(id)arg1 ;
-(void)setupFormatPopup;
-(void)setupBitDepthPopup;
-(void)setupQuartzFilterPopup;
-(void)setupCompressionPopup;
-(void)setupExifOrientationCheckbox;
-(void)setupQualitySlider;
-(void)setupAlphaCheckbox;
-(void)setupEncryptCheckBox;
-(void)setupRasterizeDPI;
-(void)setupMovieSizePopup;
-(void)setCurrentFileFormat:(IKFileFormat *)arg1 ;
-(IKFileFormat *)currentFileFormat;
-(void)requestUserSelectionUpdate:(char)arg1 ;
-(void)compareEncyptPassword1and2;
-(void)_updateViewLayout;
-(void)updateAlphaCheckbox;
-(void)updateUIElements;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)viewDidMoveToWindow;
-(void)controlTextDidChange:(id)arg1 ;
-(void)updateUI;
-(NSTextField *)fileSize;
@end

