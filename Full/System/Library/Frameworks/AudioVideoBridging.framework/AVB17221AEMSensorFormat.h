/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <AudioVideoBridging/NSCopying.h>

@interface AVB17221AEMSensorFormat : AVB17221AEMObject <NSCopying> {

	unsigned long long sensorFormat;

}

@property (assign) unsigned long long sensorFormat; 
@property (assign) char vendorFormat; 
@property (assign) unsigned char subtype; 
@property (assign) unsigned char protocolType; 
@property (assign) unsigned long long cfi; 
@property (assign) unsigned oui24; 
@property (assign) unsigned long long vendorFormat24; 
@property (assign) unsigned long long oui36; 
@property (assign) unsigned vendorFormat36; 
+(id)keyPathsForValuesAffectingVendorFormat;
+(id)keyPathsForValuesAffectingSubtype;
+(id)keyPathsForValuesAffectingProtocolType;
+(id)keyPathsForValuesCfi;
+(id)keyPathsForValuesAffectingOui24;
+(id)keyPathsForValuesAffectingVendorFormat24;
+(id)keyPathsForValuesAffectingOui36;
+(id)keyPathsForValuesAffectingVendorFormat36;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(void)setVendorFormat:(char)arg1 ;
-(char)vendorFormat;
-(void)setProtocolType:(unsigned char)arg1 ;
-(unsigned char)protocolType;
-(unsigned long long)sensorFormat;
-(void)setSensorFormat:(unsigned long long)arg1 ;
-(void)setCfi:(unsigned long long)arg1 ;
-(unsigned long long)cfi;
-(void)setOui24:(unsigned)arg1 ;
-(unsigned)oui24;
-(void)setVendorFormat24:(unsigned long long)arg1 ;
-(unsigned long long)vendorFormat24;
-(void)setOui36:(unsigned long long)arg1 ;
-(unsigned long long)oui36;
-(void)setVendorFormat36:(unsigned)arg1 ;
-(unsigned)vendorFormat36;
-(id)plistRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)subtype;
-(void)setSubtype:(unsigned char)arg1 ;
@end

