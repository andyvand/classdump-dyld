/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}

@property (copy,readonly) NSString * key; 
@property (readonly) char ascending; 
@property (readonly) SEL selector; 
@property (readonly) id comparator; 
@property (retain,readonly) id reversedSortDescriptor; 
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_defaultSelectorName;
+(void)initialize;
+(char)supportsSecureCoding;
-(void)allowEvaluation;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(id)comparator;
-(char)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(SEL)selector;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithKey:(id)arg1 ascending:(char)arg2 selector:(SEL)arg3 ;
-(char)ascending;
-(id)reversedSortDescriptor;
@end
