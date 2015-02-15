/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (nonatomic,readonly) NSKnownKeysMappingStrategy * mapping; 
+(id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(NSKnownKeysMappingStrategy *)mapping;
-(void)_setValues:(id*)arg1 retain:(char)arg2 ;
-(id)initForKeys:(id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(const id*)values;
-(void)setValues:(id*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

