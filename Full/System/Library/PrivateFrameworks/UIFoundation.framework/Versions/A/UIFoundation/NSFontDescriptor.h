/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCopying.h>
#import <UIFoundation/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSAffineTransform, NSDictionary;

@interface NSFontDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _attributes;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}

@property (copy,readonly) NSString * postscriptName; 
@property (readonly) double pointSize; 
@property (copy,readonly) NSAffineTransform * matrix; 
@property (readonly) unsigned symbolicTraits; 
@property (copy,readonly) NSDictionary * fontAttributes; 
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
+(id)_createMungledDictionary:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)pointSize;
-(NSAffineTransform *)matrix;
-(unsigned)symbolicTraits;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(NSString *)postscriptName;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(id)initWithFontAttributes:(id)arg1 ;
-(NSDictionary *)fontAttributes;
-(id)_initWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_attributes;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithMatrix:(id)arg1 ;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(id)_visibleName;
@end
