/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDInfoImporterDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPObjectContext, NSURL, TSPData, TSSTheme, , TSUProgress, TSDDrawableInfo, NSError;

@interface TSDInfoImporter : NSObject {

	TSPObjectContext* mContext;
	NSURL* mURL;
	TSPData* mImageData;
	TSSTheme* mTheme;
	<TSDInfoImporterDelegate>* mDelegate;

}

@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) TSPData * imageData; 
@property (nonatomic,readonly) TSSTheme * theme; 
@property (assign,nonatomic) <TSDInfoImporterDelegate> * delegate; 
@property (nonatomic,readonly) TSUProgress * progress; 
@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) NSError * error; 
+(id)p_registeredSubclasses;
+(id)i_supportedFileTypesForSubclass;
+(id)supportedImageFileTypes;
+(id)supportedRemoteURLSchemes;
+(Class)p_classForURL:(id)arg1 ;
+(Class)p_classForTSPData:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)supportedFileTypes;
-(id)initWithContext:(id)arg1 URL:(id)arg2 theme:(id)arg3 ;
-(id)initWithContext:(id)arg1 imageData:(id)arg2 theme:(id)arg3 ;
-(void)importInfoWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)context;
-(id)info;
-(id)URL;
-(void)cancel;
-(id)progress;
-(id)imageData;
-(id)theme;
-(id)error;
@end
