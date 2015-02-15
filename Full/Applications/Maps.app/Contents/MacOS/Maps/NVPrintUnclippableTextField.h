/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppKit/NSTextField.h>

@class NSAttributedString;

@interface NVPrintUnclippableTextField : NSTextField {

	NSAttributedString* _longStringValue;
	NSAttributedString* _shortStringValue;

}

@property (nonatomic,retain) NSAttributedString * longStringValue;               //@synthesize longStringValue=_longStringValue - In the implementation block
@property (nonatomic,retain) NSAttributedString * shortStringValue;              //@synthesize shortStringValue=_shortStringValue - In the implementation block
-(NSAttributedString *)longStringValue;
-(NSAttributedString *)shortStringValue;
-(void)setLongStringValue:(NSAttributedString *)arg1 ;
-(void)setShortStringValue:(NSAttributedString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end
