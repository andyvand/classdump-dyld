/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperturePlugin2012.ilmbplugin/Contents/MacOS/iLMBAperturePlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBAperturePlugin2012/AP2012_RKEntity.h>

@class ILMB_APERTURE_2012_HgRTreeIndexEntity;

@interface AP2012_RKPlaceEntity : AP2012_RKEntity {

	ILMB_APERTURE_2012_HgRTreeIndexEntity* _rTreeIndexEntity;

}

@property (nonatomic,retain) ILMB_APERTURE_2012_HgRTreeIndexEntity * rTreeIndexEntity;              //@synthesize rTreeIndexEntity=_rTreeIndexEntity - In the implementation block
-(id)initWithTableName:(id)arg1 forDatabaseManager:(id)arg2 forDatabase:(id)arg3 ;
-(void)copyRecordsToEntity:(id)arg1 withCanceler:(id)arg2 where:(id)arg3 args:(id)arg4 ;
-(id)loadModelFromResultSet:(id)arg1 ;
-(void)setRTreeIndexEntity:(ILMB_APERTURE_2012_HgRTreeIndexEntity *)arg1 ;
-(ILMB_APERTURE_2012_HgRTreeIndexEntity *)rTreeIndexEntity;
-(char)createTableIfMissing;
-(void)waitForOutstandingWrites;
-(id)persistFields;
-(void)dealloc;
@end
