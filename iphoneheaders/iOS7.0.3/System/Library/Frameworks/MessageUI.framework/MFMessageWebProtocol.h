/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLProtocol.h>

@interface MFMessageWebProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(void)unregisterFragmentsForUUID:(id)arg1 ;
+(void)registerFragments:(id)arg1 forUUID:(id)arg2 ;
+(void)initialize;
-(void)startLoading;
-(void)dealloc;
-(void)stopLoading;
@end
