/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSString;

@interface NSNibExternalObjectPlaceholder : NSObject <NSCoding> {

	NSString* _externalObjectPlaceholderIdentifier;

}

@property (nonatomic,copy) NSString * externalObjectPlaceholderIdentifier;              //@synthesize externalObjectPlaceholderIdentifier=_externalObjectPlaceholderIdentifier - In the implementation block
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(CFDictionaryRef)placeholderDecodingMap;
+(void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3 ;
+(id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalObjectPlaceholderIdentifier;
-(void)setExternalObjectPlaceholderIdentifier:(NSString *)arg1 ;
@end

