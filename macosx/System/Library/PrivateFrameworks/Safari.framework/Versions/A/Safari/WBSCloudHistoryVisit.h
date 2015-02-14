/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSCloudHistoryVisitIdentifier, NSString, NSDictionary;

@interface WBSCloudHistoryVisit : NSObject {

	char _loadSuccessful;
	char _httpNonGet;
	WBSCloudHistoryVisitIdentifier* _visitIdentifier;
	NSString* _title;
	WBSCloudHistoryVisitIdentifier* _redirectSourceVisitIdentifier;
	WBSCloudHistoryVisit* _redirectSourceVisit;
	WBSCloudHistoryVisitIdentifier* _redirectDestinationVisitIdentifier;
	WBSCloudHistoryVisit* _redirectDestinationVisit;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * visitIdentifier;                                 //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) char loadSuccessful;                                   //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,getter=wasHTTPNonGet,nonatomic) char httpNonGet;                                           //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * redirectSourceVisitIdentifier;                   //@synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectSourceVisit;                              //@synthesize redirectSourceVisit=_redirectSourceVisit - In the implementation block
@property (nonatomic,copy) WBSCloudHistoryVisitIdentifier * redirectDestinationVisitIdentifier;              //@synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectDestinationVisit;                         //@synthesize redirectDestinationVisit=_redirectDestinationVisit - In the implementation block
-(id)initWithHistoryVisit:(id)arg1 ;
-(WBSCloudHistoryVisitIdentifier *)visitIdentifier;
-(WBSCloudHistoryVisitIdentifier *)redirectSourceVisitIdentifier;
-(void)setRedirectSourceVisit:(WBSCloudHistoryVisit *)arg1 ;
-(void)setRedirectDestinationVisit:(WBSCloudHistoryVisit *)arg1 ;
-(WBSCloudHistoryVisit *)redirectSourceVisit;
-(WBSCloudHistoryVisit *)redirectDestinationVisit;
-(char)wasHTTPNonGet;
-(char)loadWasSuccessful;
-(void)setVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
-(void)setHttpNonGet:(char)arg1 ;
-(void)setRedirectSourceVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
-(WBSCloudHistoryVisitIdentifier *)redirectDestinationVisitIdentifier;
-(void)setRedirectDestinationVisitIdentifier:(WBSCloudHistoryVisitIdentifier *)arg1 ;
-(void)setLoadSuccessful:(char)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
@end

