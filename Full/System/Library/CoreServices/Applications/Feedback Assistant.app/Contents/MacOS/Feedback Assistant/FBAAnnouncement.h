/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/FBAManagedFeedbackObject.h>
#import <Feedback Assistant/FBAMailboxContent.h>

@class NSURL, NSString, NSXMLDocument, NSDate, FBAProject, NSNumber;

@interface FBAAnnouncement : FBAManagedFeedbackObject <FBAMailboxContent> {

	NSURL* _searchURL;
	NSString* cachedFullHTMLContent;
	NSXMLDocument* xmlDoc;

}

@property (retain) NSString * title; 
@property (retain) NSString * body; 
@property (retain) NSString * type; 
@property (retain) NSDate * createdAt; 
@property (assign) char unread; 
@property (assign) char deleted; 
@property (retain) FBAProject * project; 
@property (retain) NSString * cachedFullHTMLContent; 
@property (retain) NSXMLDocument * xmlDoc; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSNumber * ID; 
@property (readonly) NSDate * mailboxSortDate; 
@property (readonly) NSString * mailboxKind; 
@property (readonly) char shouldAppearInInbox; 
@property (readonly) char shouldAppearInDrafts; 
@property (readonly) char shouldAppearInSent; 
@property (readonly) NSString * searchText; 
@property (readonly) NSURL * searchURL; 
+(id)keyPathsForValuesAffectingMailboxSortDate;
+(id)keyPathsForValuesAffectingSearchText;
-(NSString *)mailboxKind;
-(char)shouldAppearInInbox;
-(NSDate *)mailboxSortDate;
-(char)shouldAppearInDrafts;
-(char)shouldAppearInSent;
-(NSString *)searchText;
-(id)fullHTMLContent;
-(void)setXmlDoc:(NSXMLDocument *)arg1 ;
-(NSString *)cachedFullHTMLContent;
-(void)setCachedFullHTMLContent:(NSString *)arg1 ;
-(NSXMLDocument *)xmlDoc;
-(void)markReadWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)searchURL;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

