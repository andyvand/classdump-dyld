/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, GEOCity;

@interface GEOCityProxy : NSObject {

	NSDictionary* infoDictionary;
	GEOCity* _realCity;

}
+(id)cityProxyWithDumpDictionary:(id)arg1 ;
-(id)country;
-(id)latitude;
-(id)longitude;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)timeZone;
-(id)displayName;
-(id)geonameid;
-(id)population;
-(id)displayNameAndCountry;
-(id)displayTimeZoneString;
-(id)displayShortTimeZoneString;
-(id)regionalCode;
-(id)initWithDumpDictionary:(id)arg1 ;
-(id)realCity;
-(id)_objectFromInfoDictionaryWithKey:(id)arg1 ;
-(id)displayNameLanguage:(id*)arg1 ;
-(id)timeZoneName;
@end

