/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@interface _NSCallStackArray : NSArray {

	void* _frames;
	unsigned long long _cnt;
	unsigned long long _ignore;
	char** _pcstrs;
	char _wantSyms;

}
+(id)arrayWithFrames:(void*)arg1 count:(unsigned long long)arg2 symbols:(char)arg3 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
@end

