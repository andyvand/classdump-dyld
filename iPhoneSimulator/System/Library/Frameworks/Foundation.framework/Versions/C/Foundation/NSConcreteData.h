/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned _isInline : 1;
	unsigned _retainCount : 31;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;
	SCD_Union_NS22 _u;

}
-(void)getBytes:(void*)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(char)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(char)arg3 freeWhenDone:(char)arg4 bytesAreVM:(char)arg5 ;
-(char)_isCompact;
-(char)_copyWillRetain;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(const void*)bytes;
-(unsigned long long)length;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
@end

