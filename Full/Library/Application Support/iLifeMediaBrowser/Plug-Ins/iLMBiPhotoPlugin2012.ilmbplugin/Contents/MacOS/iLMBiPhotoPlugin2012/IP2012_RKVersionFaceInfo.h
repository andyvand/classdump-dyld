/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, IP2012_RKDetectedFace, IP2012_RKFaceName, NSNumber, DGImage, IP2012_RKDatabase, IP2012_RKVersion;

@interface IP2012_RKVersionFaceInfo : NSObject {

	NSString* _versionUuid;
	IP2012_RKDetectedFace* _detectedFace;
	IP2012_RKFaceName* _faceName;
	NSNumber* _faceKey;
	DGImage* _faceTile;
	IP2012_RKDatabase* _database;

}

@property (nonatomic,retain) NSString * versionUuid;                            //@synthesize versionUuid=_versionUuid - In the implementation block
@property (nonatomic,retain,readonly) IP2012_RKVersion * version; 
@property (nonatomic,retain) IP2012_RKDetectedFace * detectedFace;              //@synthesize detectedFace=_detectedFace - In the implementation block
@property (nonatomic,retain) IP2012_RKFaceName * faceName;                      //@synthesize faceName=_faceName - In the implementation block
@property (nonatomic,retain) NSNumber * faceKey;                                //@synthesize faceKey=_faceKey - In the implementation block
@property (nonatomic,retain) DGImage * faceTile;                                //@synthesize faceTile=_faceTile - In the implementation block
@property (nonatomic,readonly) NSNumber * correlatedFaceKey; 
@property (nonatomic,retain) IP2012_RKDatabase * database;                      //@synthesize database=_database - In the implementation block
-(NSNumber *)correlatedFaceKey;
-(IP2012_RKFaceName *)faceName;
-(IP2012_RKDetectedFace *)detectedFace;
-(void)setFaceName:(IP2012_RKFaceName *)arg1 ;
-(NSNumber *)faceKey;
-(NSString *)versionUuid;
-(void)setVersionUuid:(NSString *)arg1 ;
-(void)setFaceKey:(NSNumber *)arg1 ;
-(id)initWithVersionUuid:(id)arg1 database:(id)arg2 ;
-(void)setDetectedFace:(IP2012_RKDetectedFace *)arg1 ;
-(void)setFaceTile:(DGImage *)arg1 ;
-(id)initWithFaceKey:(id)arg1 ;
-(id)initWithFaceName:(id)arg1 ;
-(DGImage *)faceTile;
-(id)initWithDetectedFace:(id)arg1 ;
-(id)initWithVersion:(id)arg1 faceKey:(id)arg2 ;
-(id)initWithVersion:(id)arg1 detectedFace:(id)arg2 ;
-(id)initWithVersionUuid:(id)arg1 detectedFace:(id)arg2 ;
-(id)initWithVersion:(id)arg1 faceName:(id)arg2 ;
-(id)initWithVersion:(id)arg1 detectedFace:(id)arg2 faceName:(id)arg3 ;
-(id)faceTileWithReadyHandler:(id)arg1 ;
-(IP2012_RKDatabase *)database;
-(void)setDatabase:(IP2012_RKDatabase *)arg1 ;
-(void)dealloc;
-(id)description;
-(IP2012_RKVersion *)version;
-(id)initWithVersion:(id)arg1 ;
@end

