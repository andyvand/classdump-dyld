/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)bitmapRepresentation;
-(char)isSupersetOfSet:(id)arg1 ;
-(char)hasMemberInPlane:(unsigned char)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)characterIsMember:(unsigned short)arg1 ;
-(Class)classForCoder;
-(id)invertedSet;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)invert;
-(void)addCharactersInString:(id)arg1 ;
-(char)longCharacterIsMember:(unsigned)arg1 ;
@end

