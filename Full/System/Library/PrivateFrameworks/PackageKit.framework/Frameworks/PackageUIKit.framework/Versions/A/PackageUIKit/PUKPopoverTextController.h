/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSViewController.h>

@class NSTextField;

@interface PUKPopoverTextController : NSViewController {

	NSTextField* _textField;

}

@property (nonatomic,retain,readonly) NSTextField * textField;              //@synthesize textField=_textField - In the implementation block
+(CGRect)textRectForString:(id)arg1 withAttributes:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(NSTextField *)textField;
@end

