/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Combine PDF Pages.action/Contents/MacOS/Combine PDF Pages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Combine PDF Pages/PMCMDActionJoin.h>

@class NSString, NSNumber, NSAppleEventDescriptor;

@interface JoinPDFPage : PMCMDActionJoin {

	NSString* pageNum;
	NSNumber* odd;
	NSAppleEventDescriptor* _inputList;

}
-(void)setInputList:(id)arg1 ;
-(id)inputList;
-(id)runWithList:(id)arg1 ;
-(id)adjustParams:(id)arg1 ;
-(id)commandParameters;
-(void)finalizeArgs:(id)arg1 ;
-(void)appendInput:(id)arg1 toArgs:(id)arg2 ;
-(id)tool;
-(void)dealloc;
-(void)awakeFromNib;
@end

