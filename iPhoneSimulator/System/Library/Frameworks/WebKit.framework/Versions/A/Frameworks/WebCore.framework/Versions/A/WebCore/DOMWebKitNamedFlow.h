/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMWebKitNamedFlow : DOMObject

@property (copy,readonly) NSString * name; 
@property (readonly) char overset; 
@property (readonly) int firstEmptyRegionIndex; 
-(void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(char)arg3 ;
-(void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(char)arg3 ;
-(char)dispatchEvent:(id)arg1 ;
-(char)overset;
-(int)firstEmptyRegionIndex;
-(id)getRegionsByContent:(id)arg1 ;
-(id)getRegions;
-(id)getContent;
-(void)finalize;
-(void)dealloc;
-(NSString *)name;
@end

