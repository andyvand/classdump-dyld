/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakPointerValue : NSValue {

	void* _value;
	void* _weakValue;

}
-(char)isEqualToValue:(id)arg1 ;
-(id)initWithPointer:(void*)arg1 ;
-(unsigned long long)hash;
-(id)nonretainedObjectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(void)getValue:(void*)arg1 ;
@end
