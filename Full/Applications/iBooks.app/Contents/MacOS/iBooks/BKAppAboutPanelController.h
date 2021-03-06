/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField, NSImageView, NSButton;

@interface BKAppAboutPanelController : NSWindowController {

	NSTextField* _appVersionField;
	NSTextField* _appCopyrightField;
	NSImageView* _imageView;
	NSButton* _acknowledgementsButton;
	NSButton* _licenseAgreementButton;

}

@property (__weak) NSButton * acknowledgementsButton;              //@synthesize acknowledgementsButton=_acknowledgementsButton - In the implementation block
@property (__weak) NSButton * licenseAgreementButton;              //@synthesize licenseAgreementButton=_licenseAgreementButton - In the implementation block
+(id)windowNibName;
+(id)instance;
-(void)performWindowClose:(id)arg1 ;
-(id)acknowledgementsFileName;
-(id)licenseFileName;
-(void)acknowledgementsButton:(id)arg1 ;
-(void)licenseAgreementButton:(id)arg1 ;
-(NSButton *)acknowledgementsButton;
-(void)setAcknowledgementsButton:(NSButton *)arg1 ;
-(NSButton *)licenseAgreementButton;
-(void)setLicenseAgreementButton:(NSButton *)arg1 ;
-(id)imageName;
-(id)init;
-(void)awakeFromNib;
@end

