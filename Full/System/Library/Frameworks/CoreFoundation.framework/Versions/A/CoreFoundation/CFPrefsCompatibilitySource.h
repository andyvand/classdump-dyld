/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@interface CFPrefsCompatibilitySource : CFPrefsSource {

	char _disabled;

}
-(void)alreadylocked_setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(char)alreadylocked_requestNewData;
@end

