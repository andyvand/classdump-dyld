/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKImporter <NSObject>
@optional
+(BOOL)instancesRespondToSelector:(SEL)arg1;
-(id)buildVersionHistory;
-(unsigned)initialVariantIndex;
-(BOOL)postprocessRegularDocumentRoot:(id)arg1 delegate:(id)arg2;
-(BOOL)importStartsWithThemeOnly;
-(id)uuidOfImportedDocument;
-(id)thumbnailImage;

@required
-(BOOL)importToDocumentRoot:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
-(id)initialTemplateName;
-(BOOL)stylesheetUpdatesRequired;
-(void)cancel;
-(void)setURL:(id)arg1;
-(id)initWithURL:(id)arg1;
-(void)quit;
-(id)progressContext;
-(void)setProgressContext:(id)arg1;
@end
