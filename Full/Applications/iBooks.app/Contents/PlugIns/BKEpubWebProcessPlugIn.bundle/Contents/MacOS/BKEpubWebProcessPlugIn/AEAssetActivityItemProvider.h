/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKEpubWebProcessPlugIn/NSPasteboardWriting.h>
#import <BKEpubWebProcessPlugIn/IMActivityItemSourceExpanding.h>

@protocol AEAnnotationPaginationDataSource;
@class NSNumber, NSArray, NSString;

@interface AEAssetActivityItemProvider : NSObject <NSPasteboardWriting, IMActivityItemSourceExpanding> {

	NSNumber* _contentProtected;
	char _citationsAllowed;
	int _shareType;
	NSArray* _annotations;
	/*^block*/id _propertySource;
	id<AEAnnotationPaginationDataSource> _paginationDataSource;
	NSString* _activityType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * annotations;                                                  //@synthesize annotations=_annotations - In the implementation block
@property (assign,nonatomic) int shareType;                                                          //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,copy) id propertySource;                                                        //@synthesize propertySource=_propertySource - In the implementation block
@property (assign,nonatomic) id<AEAnnotationPaginationDataSource> paginationDataSource;              //@synthesize paginationDataSource=_paginationDataSource - In the implementation block
@property (assign,getter=areCitationsAllowed,nonatomic) char citationsAllowed;                       //@synthesize citationsAllowed=_citationsAllowed - In the implementation block
@property (nonatomic,retain) NSString * activityType;                                                //@synthesize activityType=_activityType - In the implementation block
-(id)initWithAnnotations:(id)arg1 propertySource:(/*^block*/id)arg2 ;
-(id)initWithPropertySource:(/*^block*/id)arg1 ;
-(int)shareType;
-(char)areCitationsAllowed;
-(id)propertySource;
-(void)setCitationsAllowed:(char)arg1 ;
-(id<AEAnnotationPaginationDataSource>)paginationDataSource;
-(void)setPaginationDataSource:(id<AEAnnotationPaginationDataSource>)arg1 ;
-(id)expandedItemProviders;
-(id)initWithAnnotation:(id)arg1 propertySource:(/*^block*/id)arg2 ;
-(id)pasteboardString;
-(void)setPropertySource:(id)arg1 ;
-(void)setShareType:(int)arg1 ;
-(id)pasteboardRepresentation;
-(void)setActivityType:(NSString *)arg1 ;
-(NSArray *)annotations;
-(void)setAnnotations:(NSArray *)arg1 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(NSString *)activityType;
@end

