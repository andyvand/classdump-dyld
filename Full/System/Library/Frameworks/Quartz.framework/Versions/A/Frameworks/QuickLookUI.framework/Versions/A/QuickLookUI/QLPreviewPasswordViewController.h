/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <QuickLookUI/QLDisplayable.h>

@class NSTextField, NSButton, QLPreviewDocument, NSString, NSView, CALayer, NSResponder, NSDictionary;

@interface QLPreviewPasswordViewController : NSViewController <QLDisplayable> {

	NSTextField* passwordField;
	NSTextField* descriptionField;
	NSButton* validateButton;
	QLPreviewDocument* _document;
	char _hasEnteredWrongPassword;

}

@property (assign) QLPreviewDocument * document;                    //@synthesize document=_document - In the implementation block
@property (assign) char hasEnteredWrongPassword; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSView * quickLookView; 
@property (readonly) CALayer * quickLookLayer; 
@property (assign) CGRect quickLookFrame; 
@property (readonly) NSResponder * responder; 
@property (readonly) CGRect borderFrame; 
@property (readonly) NSDictionary * sizingConstraints; 
@property (readonly) id accessibilityFocusedUIElement; 
@property (assign) int inputFocusType; 
-(NSDictionary *)sizingConstraints;
-(void)didShow;
-(int)inputFocusType;
-(void)giveInputFocus;
-(CALayer *)quickLookLayer;
-(NSView *)quickLookView;
-(CGRect)quickLookFrame;
-(void)setQuickLookFrame:(CGRect)arg1 ;
-(void)setHasEnteredWrongPassword:(char)arg1 ;
-(char)hasEnteredWrongPassword;
-(void)validatePassword:(id)arg1 ;
-(QLPreviewDocument *)document;
-(void)setMode:(int)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDocument:(QLPreviewDocument *)arg1 ;
@end

