/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMMediaList : DOMObject

@property (copy) NSString * mediaText; 
@property (readonly) unsigned length; 
-(id)item:(unsigned)arg1 ;
-(NSString *)mediaText;
-(void)setMediaText:(NSString *)arg1 ;
-(void)deleteMedium:(id)arg1 ;
-(void)appendMedium:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned)length;
@end

