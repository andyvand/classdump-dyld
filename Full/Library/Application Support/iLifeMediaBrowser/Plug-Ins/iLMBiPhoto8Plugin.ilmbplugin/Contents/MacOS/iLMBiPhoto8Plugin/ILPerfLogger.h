/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhoto8Plugin.ilmbplugin/Contents/MacOS/iLMBiPhoto8Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ILPerfLogger : NSObject {

	double _warmDatabaseFileTime;
	double _loadAlbumDataXMLTime;
	double _fetchBasicTime;
	double _findMovieAlbumsTime;
	double _previewPathLookupTime;
	double _loadMasterImageListTime;
	double _createAlbumsTime;
	double _createEventsTime;
	double _setChildGroupsTime;
	double _setPublishedIconsTime;
	double _releaseAutoreleasePoolTime;
	double _markFlaggedTime;
	double _placesTime;
	double _facesTime;
	double _totalTime;

}
-(void)recordLoadAlbumDataXMLTime:(id)arg1 ;
-(void)recordPlacesTime:(id)arg1 ;
-(void)recordFacesTime:(id)arg1 ;
-(void)recordLoadMasterImageListTime:(id)arg1 ;
-(void)recordPreviewPathLookupTime:(id)arg1 ;
-(void)recordMarkFlaggedTime:(id)arg1 ;
-(void)recordReleaseAutoreleasePoolTime:(id)arg1 ;
-(void)dumpTimes;
-(void)recordTotalTime:(id)arg1 ;
-(void)recordSetChildGroupsTime:(id)arg1 ;
-(void)recordSetPublishedIconsTime:(id)arg1 ;
-(void)recordCreateEventsTime:(id)arg1 ;
-(void)recordCreateAlbumsTime:(id)arg1 ;
-(void)recordWarmDatabaseFileTime:(id)arg1 ;
-(void)recordFetchBasicTime:(id)arg1 ;
-(void)recordFindMovieAlbumsTime:(id)arg1 ;
@end
