/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>
#import <AppKit/NSCopying.h>

@class NSString;

@interface NSPersistentUIEncodedReference : NSObject <NSCoding, NSCopying> {

	NSString* persistentIdentifier;
	unsigned windowID;

}

@property (readonly) NSString * persistentIdentifier; 
@property (assign) unsigned windowID; 
+(id)encodedReferenceToResponderMap;
+(void)setEncodedReferenceToResponderMap:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)windowID;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setWindowID:(unsigned)arg1 ;
-(id)initForPersistentIdentifier:(id)arg1 windowID:(unsigned)arg2 ;
@end

