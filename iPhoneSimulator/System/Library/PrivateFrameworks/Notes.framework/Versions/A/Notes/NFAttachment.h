/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSURL, NFNote, NSImage;

@interface NFAttachment : NSManagedObject

@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,retain) NSURL * fileURL; 
@property (nonatomic,retain) NFNote * note; 
@property (__weak,readonly) NSURL * cidURL; 
@property (__weak,readonly) NSString * filename; 
@property (__weak,readonly) NSImage * icon; 
@property (nonatomic,retain) NSString * primitiveContentID; 
+(id)keyPathsForValuesAffectingIcon;
+(id)attachmentWithContentID:(id)arg1 inNote:(id)arg2 context:(id)arg3 ;
+(id)keyPathsForValuesAffectingCidURL;
+(id)keyPathsForValuesAffectingFilename;
-(void)prepareForDeletion;
-(id)compactDescription;
-(NSURL *)cidURL;
-(NSImage *)icon;
-(NSString *)filename;
-(void)awakeFromInsert;
-(id)initWithFilename:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(char)validateFileURL:(inout id*)arg1 error:(out id*)arg2 ;
@end

