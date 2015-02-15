/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/NSSecureCoding.h>

@class NSDictionary;

@interface ISImageDescriptor : NSObject <NSSecureCoding> {

	LSBindingRef _binding;
	unsigned _size;
	unsigned _scale;
	NSDictionary* _options;

}

@property (readonly) LSBindingRef binding;                //@synthesize binding=_binding - In the implementation block
@property (readonly) unsigned size;                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned scale;                      //@synthesize scale=_scale - In the implementation block
@property (readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)scale;
-(id)initWithBinding:(LSBindingRef)arg1 size:(unsigned)arg2 scale:(unsigned)arg3 options:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(LSBindingRef)binding;
-(unsigned)size;
-(NSDictionary *)options;
@end

