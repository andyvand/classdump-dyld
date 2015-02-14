/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIPopoverViewController.h>

@class NSTextField, NSString;

@interface LUISimpleViewController : LUIPopoverViewController {

	NSTextField* _messageTextField;
	NSTextField* _informationTextField;
	NSString* _message;
	NSString* _information;

}

@property (assign) NSTextField * messageTextField;                  //@synthesize messageTextField=_messageTextField - In the implementation block
@property (assign) NSTextField * informationTextField;              //@synthesize informationTextField=_informationTextField - In the implementation block
@property (copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (copy) NSString * information;                            //@synthesize information=_information - In the implementation block
-(NSString *)information;
-(void)dealloc;
-(void)awakeFromNib;
-(NSTextField *)messageTextField;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setMessageTextField:(NSTextField *)arg1 ;
-(void)setInformation:(NSString *)arg1 ;
-(void)_layoutContentView;
-(void)prepareForDisplay;
-(NSTextField *)informationTextField;
-(void)setInformationTextField:(NSTextField *)arg1 ;
@end

