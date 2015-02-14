/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSView, NSString, NSPrintInfo, NSWindowController, NSArray;

@interface NSPrintPanel : NSObject {

	NSMutableArray* _accessoryControllers;
	id _previewController;
	NSView* _thumbnailView;
	long long _options;
	NSString* _defaultButtonTitle;
	NSString* _helpAnchor;
	NSString* _jobStyleHint;
	NSPrintInfo* _originalPrintInfo;
	id _delegate;
	SEL _didEndSelector;
	void* _contextInfo;
	NSPrintInfo* _presentedPrintInfo;
	NSWindowController* _windowController;
	id _reserved[2];

}

@property (copy,readonly) NSArray * accessoryControllers; 
@property (assign) unsigned long long options; 
@property (copy) NSString * helpAnchor; 
@property (copy) NSString * jobStyleHint; 
@property (readonly) NSPrintInfo * printInfo; 
+(id)printPanel;
-(id)init;
-(void)dealloc;
-(NSString *)helpAnchor;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(long long)runModal;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(unsigned long long)options;
-(NSPrintInfo *)printInfo;
-(void)beginSheetWithPrintInfo:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(long long)runModalWithPrintInfo:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSArray *)accessoryControllers;
-(void)_sheet:(id)arg1 didEndWithResult:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)addAccessoryController:(id)arg1 ;
-(void)removeAccessoryController:(id)arg1 ;
-(void)pickedButton:(id)arg1 ;
-(void)setJobStyleHint:(NSString *)arg1 ;
-(NSString *)jobStyleHint;
-(void)_setThumbnailView:(id)arg1 ;
-(id)_thumbnailView;
-(void)_setPreviewController:(id)arg1 ;
-(void)_deprecatedUpdateFromPrintInfo;
-(unsigned)_optionsForShowingAsSheet:(char)arg1 ;
-(id)defaultButtonTitle;
-(void)setDefaultButtonTitle:(id)arg1 ;
-(void)_deprecatedFinalWritePrintInfo;
-(long long)_runModalWithPrintInfo:(id)arg1 ;
-(void)updateFromPrintInfo;
-(void)finalWritePrintInfo;
-(void)_deprecatedSetAccessoryView:(id)arg1 ;
-(id)_deprecatedAccessoryView;
-(void)pickedAllPages:(id)arg1 ;
-(void)pickedLayoutList:(id)arg1 ;
@end

