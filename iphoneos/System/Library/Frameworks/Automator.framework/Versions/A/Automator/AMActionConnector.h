/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/NSCopying.h>

@class NSString, AMConnectionPoint, AMConversion, NSArray, NSError;

@interface AMActionConnector : NSObject <NSCopying> {

	NSString* _uuid;
	AMConnectionPoint* _pointA;
	AMConnectionPoint* _pointB;
	AMConnectionPoint* _runtimePointB;
	AMConversion* _selectedConversion;
	NSArray* _conversions;
	NSError* _conversionError;

}
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)setUUID:(id)arg1 ;
-(id)selectedConversion;
-(id)runtimePointB;
-(void)setPointA:(id)arg1 ;
-(void)setPointB:(id)arg1 ;
-(id)pointA;
-(id)pointB;
-(void)setRuntimePointB:(id)arg1 ;
-(id)_runtimePointB;
-(void)setConversions:(id)arg1 ;
-(id)conversions;
-(id)conversionError;
-(void)setConversionError:(id)arg1 ;
-(void)setSelectedConversion:(id)arg1 ;
-(id)UUID;
-(char)isDisabled;
-(void)disconnect;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isValid;
-(id)propertyList;
@end

