/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSLocale.h>

@class NSLocale;

@interface NSAutoLocale : NSLocale {

	NSLocale* loc;

}
+(char)supportsSecureCoding;
-(void)_update:(id)arg1 ;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)_prefs;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
@end

