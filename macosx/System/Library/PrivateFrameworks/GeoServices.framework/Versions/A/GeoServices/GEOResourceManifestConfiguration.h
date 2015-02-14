/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GEOResourceManifestConfiguration : NSObject {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;

}

@property (assign,nonatomic) unsigned tileGroupIdentifier;                //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                 //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                            //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                 //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                        //@synthesize environment=_environment - In the implementation block
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(char)isDefaultConfiguration;
-(id)directorySuffix;
-(id)conciseDictionaryRepresentation;
-(NSString *)osVersion;
-(NSString *)hardwareIdentifier;
-(id)initWithConciseDictionaryRepresentation:(id)arg1 ;
-(NSString *)os;
-(NSString *)osBuild;
-(NSString *)applicationIdentifier;
-(NSString *)applicationVersion;
-(unsigned)tileGroupIdentifier;
-(void)setOs:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

