/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <ShareKit/NSSharingPlugInViewControllerProtocol.h>

@class NSImage, NSImageView, NSTextField, NSButton, NSString;

@interface NSSharingAccountConfigurationViewController : NSViewController <NSSharingPlugInViewControllerProtocol> {

	NSImageView* logoImageView;
	NSImageView* iconImageView;
	NSTextField* setupTextField;
	NSButton* cancelButton;
	NSButton* configureButton;

}

@property (readonly) NSImageView * logoImageView; 
@property (readonly) NSImageView * iconImageView; 
@property (readonly) NSTextField * setupTextField; 
@property (readonly) NSButton * cancelButton; 
@property (readonly) NSButton * configureButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSImage * previewImage; 
@property (getter=isPreviewImageVisible) char previewImageVisible; 
-(NSImageView *)logoImageView;
-(id)serviceNotConfiguredError;
-(void)closeAndConfigure:(id)arg1 ;
-(NSImageView *)iconImageView;
-(NSTextField *)setupTextField;
-(NSButton *)configureButton;
-(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)loadView;
-(id)nibName;
-(id)nibBundle;
-(void)close:(id)arg1 ;
-(NSButton *)cancelButton;
@end

