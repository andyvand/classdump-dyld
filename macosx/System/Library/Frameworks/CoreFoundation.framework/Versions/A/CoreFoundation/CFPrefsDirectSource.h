/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@class CFPDSource;

@interface CFPrefsDirectSource : CFPrefsPlistSource {

	CFPDSource* _underlyingSource;
	char _managed;

}
-(unsigned char)alreadylocked_requestNewData;
-(void*)createRequestNewContentMessageForDaemon:(char)arg1 ;
-(char)managed;
-(void*)copyReplyForDirectMessage:(void*)arg1 error:(char*)arg2 ;
-(char)sendMessage:(void*)arg1 ;
-(void)setManaged:(char)arg1 ;
-(void)sendFullyPreparedMessage:(void*)arg1 settingValue:(void*)arg2 forKey:(CFStringRef)arg3 ;
-(void)dealloc;
@end

