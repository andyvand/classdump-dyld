/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:05:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/ColorSync Utility.app/Contents/MacOS/ColorSync Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <ColorSync Utility/NSPrintPanelAccessorizing.h>

@class NSTextField, NSPopUpButton, NSButton, FilterDoc;

@interface FilterDocPDEController : NSViewController <NSPrintPanelAccessorizing> {

	NSTextField* _scaleFactorText;
	NSPopUpButton* _colorModePopup;
	NSButton* _BPCCheckBox;
	NSPopUpButton* _intentPopup;
	FilterDoc* _document;
	double _computedScale;
	char _BPC;
	char _printTargetEnabled;
	char _colorMatchingEnabled;
	unsigned long long _printMode;
	unsigned long long _intent;

}

@property (assign) double scaleFactor; 
@property (assign) unsigned long long scalingMode; 
@property (assign) unsigned long long scaleToFitMode; 
@property (assign) char autoRotate; 
@property (assign) char BPC; 
@property (assign) char printTargetEnabled; 
@property (assign) char colorMatchingEnabled; 
@property (assign) char colorMatchingActive; 
@property (assign) unsigned long long printMode; 
@property (assign) unsigned long long intent; 
+(void)initialize;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)initWithFilterDoc:(id)arg1 enableColorMatching:(char)arg2 enablePrintTarget:(char)arg3 ;
-(void)setPrintMode:(unsigned long long)arg1 ;
-(void)setIntent:(unsigned long long)arg1 ;
-(void)setBPC:(char)arg1 ;
-(unsigned long long)printMode;
-(void)setPrintTargetEnabled:(char)arg1 ;
-(char)BPC;
-(int)cgRenderingIntent;
-(unsigned long long)scalingMode;
-(unsigned long long)scaleToFitMode;
-(char)autoRotate;
-(void)updateComputedScale:(id)arg1 ;
-(void)initializeApplicationDataInPrintInfo:(id)arg1 ;
-(char)colorMatchingActive;
-(unsigned long long)intent;
-(void)setAutoRotate:(char)arg1 ;
-(void)setScalingMode:(unsigned long long)arg1 ;
-(void)setScaleToFitMode:(unsigned long long)arg1 ;
-(char)colorMatchingEnabled;
-(void)setColorMatchingEnabled:(char)arg1 ;
-(void)setColorMatchingActive:(char)arg1 ;
-(char)printTargetEnabled;
-(void)setShowExpandedPrintDialog:(char)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)help:(id)arg1 ;
-(void)dealloc;
-(void)setRepresentedObject:(id)arg1 ;
-(void)awakeFromNib;
-(id)printInfo;
-(id)localizedSummaryItems;
-(id)keyPathsForValuesAffectingPreview;
-(void)setNilValueForKey:(id)arg1 ;
-(void)updateUI:(id)arg1 ;
-(void)cleanup;
@end

