/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSPrintInfo;

@interface NSPrintInfoDictionaryProxy : NSMutableDictionary {

	NSPrintInfo* _printInfo;
	int _purpose;

}
+(id)_keysForPMKeys:(id)arg1 ;
+(id)_pmKeyForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)keyEnumerator;
-(void)removeObjectForKey:(id)arg1 ;
-(void)superRelease;
-(id)initWithPrintInfo:(id)arg1 purpose:(int)arg2 ;
@end

