/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {

	NSSet* _properties;

}

@property (nonatomic,readonly) NSSet * stringProperties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) char supportsPropertySearch; 
+(id)searchSetWithProperties:(id)arg1 ;
-(char)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)initWithSearchProperties:(id)arg1 ;
-(NSSet *)stringProperties;
-(void)dealloc;
-(id)initWithStringProperties:(id)arg1 ;
-(char)isEqualToPropertySet:(id)arg1 ;
-(char)supportsPropertySearch;
-(char)supportsWellKnownType:(int)arg1 ;
@end

