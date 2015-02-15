+[IMPlatformAbstraction defaultPlatformAbstraction]
___51+[IMPlatformAbstraction defaultPlatformAbstraction]_block_invoke
-[IMPlatformAbstraction setSandboxed:]
-[IMPlatformAbstraction setReportError:]
+[NSApplication(IMCompatibility) applicationDocumentsDirectory]
+[IMCoreDataSource persistentStoreName]
+[IMCoreDataSource persistentStoreExtension]
-[IMCoreDataSource initWithPersistentStoreURL:]
-[IMCoreDataSource loadCoreData]
-[IMCoreDataSource loadManagedObjectModel]
-[IMCoreDataSource managedObjectModel]
-[IMCoreDataSource setManagedObjectModel:]
-[IMCoreDataSource loadPersistentStoreCoordinator]
-[IMCoreDataSource persistentStoreCoordinator]
-[IMCoreDataSource setPersistentStoreCoordinator:]
-[IMCoreDataSource loadPersistentStore]
-[IMCoreDataSource persistentStoreURL]
-[IMCoreDataSource setPersistentStore:]
-[IMCoreDataSource newManagedObjectContextWithClass:]
+[IMPlugInManager defaultManager]
___33+[IMPlugInManager defaultManager]_block_invoke
-[IMPlugInManager init]
-[IMPlugInManager scanForPlugInDesciptors]
-[IMPlugInDescriptor initWithDescription:bundlePath:]
-[IMPlugInManager plugInDescriptorsPassingTest:]
-[IMPlugInManager pluginDescriptors]
-[IMPlugInDescriptor plugInDescription]
-[IMPlugInManager createObjectForPlugInDescriptor:instanceDescription:]
-[IMPlugInInstanceDescriptor initWithPlugInDescriptor:instanceDescription:]
-[IMPlugInManager createObjectForPlugInInstanceDescriptor:]
-[IMPlugInInstanceDescriptor plugInDescriptor]
-[IMPlugInDescriptor plugInClass]
-[IMPlugInDescriptor bundle]
-[IMPlugInInstanceDescriptor hash]
-[IMPlugInDescriptor hash]
-[IMPlugInInstanceDescriptor instanceDescription]
-[IMPlugInInstanceDescriptor .cxx_destruct]
+[IMUbiquitousDataProvider initialize]
-[AEAnnotationProvider initWithUbiquityEnabled:]
-[IMUbiquitousDataProvider initWithUbiquityEnabled:]
-[IMUbiquitousPersistentStoreLoader initWithIdentifier:]
+[AEAnnotationProvider storeName]
-[IMUbiquitousDataProvider localPersistentStoreLoader]
-[IMUbiquitousPersistentStoreLoader setStoreName:]
-[IMUbiquitousPersistentStoreLoader setManagedObjectModelName:]
-[AEAnnotationProvider setDelegate:]
-[IMUbiquitousDataProvider loadCoreData]
___40-[IMUbiquitousDataProvider loadCoreData]_block_invoke
-[IMUbiquitousDataProvider loadManagedObjectModel]
-[IMUbiquitousDataProvider managedObjectModel]
+[AEAnnotationProvider managedObjectModelName]
-[IMUbiquitousDataProvider setManagedObjectModel:]
-[IMUbiquitousDataProvider loadPersistentStoreCoordinator]
-[IMUbiquitousDataProvider persistentStoreCoordinator]
-[IMUbiquitousDataProvider setPersistentStoreCoordinator:]
-[IMUbiquitousDataProvider loadPersistentStore]
-[IMUbiquitousDataProvider loadLocalPersistentStoreWithCompletionBlock:]
-[IMUbiquitousPersistentStoreLoader addPersistentStoreToPersistentStoreCoordinator:includeUbiquitousOptions:]
+[IMUbiquitousDataProvider ubiquityDebug]
+[IMLogger sharedLogger]
-[IMLogger init]
-[IMLogger shouldOverrideCondition:file:]
-[IMLogger runtimeOverride]
-[IMUbiquitousPersistentStoreLoader ubiquitousContentName]
-[IMUbiquitousPersistentStoreLoader storeURL]
-[IMUbiquitousPersistentStoreLoader storeName]
-[IMUbiquitousPersistentStoreLoader identifier]
-[IMUbiquitousPersistentStoreLoader setPersistentStoreURL:]
-[IMUbiquitousPersistentStoreLoader addPersistentStoreToPersistentStoreCoordinator:withType:configuration:URL:options:]
-[IMUbiquitousDataProvider setCurrentPersistentStore:]
-[IMUbiquitousDataProvider setCurrentPersistentStoreType:]
-[IMPlugInManager plugInDescriptorForIdentifier:]
___49-[IMPlugInManager plugInDescriptorForIdentifier:]_block_invoke
-[IMPlugInManager createPlugInInstanceDescriptorForPlugInDescriptor:instanceDescription:]
-[IMPlugInManager existingInstanceForPlugInInstanceDescriptor:]
-[NSString(IMAdditions) stringValue]
-[IMCoreDataSource saveManagedObjectContext:]
-[IMCoreDataSource persistentStore]
-[IMCoreDataSource metadataDictionaryDirty]
+[NSExpressionDescription(IMAdditions) IMCoreDataObjectIDExpression]
-[NSManagedObjectContext(IMAdditions) copyEntityPropertiesArray:fromEntityName:withPredicate:sortBy:ascending:]
-[NSManagedObjectContext(IMAdditions) copyEntityPropertiesArray:fromEntityName:withPredicate:sortBy:ascending:distinct:]
+[AEAnnotation userAnnotationTypeValues]
+[AEAnnotation globalAnnotationTypeValues]
-[AEAnnotationProvider newManagedObjectContext]
-[IMUbiquitousDataProvider newManagedObjectContextWithClass:]
-[AEAnnotationManagedObjectContext setAnnotationProvider:]
+[AEAnnotation maxModificationDateForAssetsWithPredicate:inManagedObjectContext:]
+[AEAnnotation maxModificationDateColumnName]
+[AEAnnotation maxModificationDateExpressionDescription]
+[AEAnnotation maxExpressionDescriptionForProperty:expressionName:]
-[IMCoreDataSource metadataObjectForKey:]
-[IMCoreDataSource cacheMetadataDictionary]
-[IMCoreDataSource metadataDictionary]
-[IMCoreDataSource setMetadataDictionary:]
-[IMCoreDataSource setMetadataDictionaryDirty:]
+[AEAnnotation annotationsForAssetID:includingDeleted:inManagedObjectContext:]
+[AEAnnotation predicateForAnnotationsWithAssetID:includingDeleted:]
+[AEAnnotation annotationsForPredicate:inManagedObjectContext:]
-[NSManagedObjectContext(IMAdditions) entity:withPredicate:sortBy:ascending:fetchLimit:]
-[NSManagedObjectContext(IMAdditions) entity:withPredicate:sortBy:ascending:fetchLimit:prefetchRelationships:]
-[NSManagedObjectContext(IMAdditions) entity:withPredicate:sortDescriptors:fetchLimit:prefetchRelationships:]
-[AEAnnotation(BKBookmark) usesLegacySerializationMethod]
-[AEAnnotation(BKBookmark) doesSerializeAs_iBooks]
+[AEAnnotation(BKBookmark) isBKBookmarkCreatorIdentifier:]
-[AEAnnotation annotationVersion]
+[AEAnnotation maxAnnotationVersionForAssetsWithPredicate:inManagedObjectContext:]
+[AEAnnotation(BKBookmark) dictionaryRepresentationsForAnnotations:]
-[AEAnnotation(BKBookmark) isValidForSerialization]
-[AEAnnotation isAnnotationDeleted]
-[AEAnnotation annotationDeleted]
-[AEAnnotation(BKBookmark) dictionaryRepresentation]
-[AEAnnotation(BKBookmark) aeAnnotationDictionaryRepresentation]
+[AEAnnotation(BKBookmark) requiredKeysForDictionaryRepresentation]
-[AEAnnotation annotationType]
+[AEAnnotation(BKBookmark) dateKeysForDictionaryRepresentation]
+[AEAnnotation(BKBookmark) optionalKeysForDictionaryRepresentation]
-[AEAnnotation annotationStyle]
-[AEAnnotation annotationIsUnderline]
+[IMUserDataCull isTimestampNewerThanMaxDeletedAge:]
+[IMUserDataCull isTimestampTrustworthy:]
+[IMUserDataCull isTimestamp:newerThanMaxAgeFromRightNow:]
+[IMUserDataCull maxDeletedAge]
-[NSData(Gzip) gzipDeflate]
+[AEAnnotation globalAnnotationForAssetID:inManagedObjectContext:]
+[AEAnnotation predicateForGlobalAnnotationWithAssetID:]
+[NSManagedObjectContext(IMAdditions) mergePredicate:andPredicate:]
-[NSManagedObjectContext(IMAdditions) copyEntityPropertyArray:fromEntityName:withPredicate:sortBy:ascending:]
-[IMPlugInInstanceDescriptor isEqual:]
-[IMPlugInDescriptor isEqual:]
-[IMPlugInInstanceDescriptor userDefaults]
+[NSApplication(IMCompatibility) applicationCacheDirectory]
-[IMImageCache initWithIdentifier:basePath:memorySize:]
-[IMMemoryCache init]
-[IMMemoryCache setTotalCostLimit:]
+[IMPersistentCacheManager sharedInstance]
___42+[IMPersistentCacheManager sharedInstance]_block_invoke
-[IMPersistentCacheManager init]
-[IMPersistentCacheManager cacheForPath:maxSize:]
___49-[IMPersistentCacheManager cacheForPath:maxSize:]_block_invoke
-[IMPersistentCache initWithPath:maxSize:]
-[IMDatabaseHandle initWithPath:]
-[IMAdminTable initWithDatabaseHandle:]
-[IMDatabaseHandle runStatement:arguments:]
___43-[IMDatabaseHandle runStatement:arguments:]_block_invoke
-[IMDatabaseHandle _databaseHandle]
-[IMDatabaseHandle _bindArguments:inStatement:]
-[IMAdminTable hasDatabaseVersion]
-[IMDatabaseHandle arrayForQuery:arguments:rawRows:]
___52-[IMDatabaseHandle arrayForQuery:arguments:rawRows:]_block_invoke
-[IMDatabaseHandle _cursorForQuery:withArguments:]
-[IMDatabaseCursor initWithStatement:]
-[IMDatabaseCursor nextRowAsArray]
-[IMDatabaseCursor(Private) _undeclaredTypeForColumnIndex:]
-[IMDatabaseCursor reset]
-[NSArray(IMAdditions) firstObject]
-[IMPersistentCache _createStorageForDb:]
-[IMAdminTable databaseVersion]
-[IMDatabaseCursor nextRowAsDictionary]
-[IMDatabaseCursor columnNames]
-[IMPersistentCache _cacheSize]
-[IMAdminTable numberValueForKey:domain:]
-[IMDatabaseCursor statement]
-[IMAdminTable setLastAccessDate:]
-[IMAdminTable setProperty:forKey:domain:]
-[IMImageCache keyForSize:withBaseKey:suffix:]
-[IMImageCache hasImageForKey:]
-[IMMemoryCache objectForKey:]
___30-[IMMemoryCache objectForKey:]_block_invoke
-[IMPersistentCache hasItemForKey:]
-[IMPersistentCache _unknownKeysContainsObject:]
-[IMPersistentCacheManager purgeFromCache:]
___43-[IMPersistentCacheManager purgeFromCache:]_block_invoke
-[IMImageCache imageForKey:]
-[IMImageCache _fetchImageForKey:forceDecode:]
-[IMPersistentCache CGImagesForKey:size:resourceSize:]
-[IMPersistentCache _copyCGImageForRow:size:resourceSize:scale:]
-[IMPersistentCache _accessedIdsAddObject:]
-[NSNull(CMDatabaseHandleAdditions) integerValue]
+[NSImage(IMCompatibility) im_imageWithCGImages:size:]
-[IMMemoryCache setObject:forKey:cost:]
+[_IMMemoryCacheItem cacheItemWithItem:key:cost:]
-[_IMMemoryCacheItem setItem:]
-[_IMMemoryCacheItem setCost:]
-[_IMMemoryCacheItem setTimeStamp:]
-[_IMMemoryCacheItem setKey:]
-[_IMMemoryCacheItem setConformsToProtocol:]
-[IMMemoryCache _addItem:forKey:]
___33-[IMMemoryCache _addItem:forKey:]_block_invoke
-[_IMMemoryCacheItem cost]
-[IMMemoryCache _checkLimits]
-[_IMMemoryCacheItem timeStamp]
-[NSArray(IMAdditions) indexOfObjectWithValue:forKeyPath:]
-[_IMMemoryCacheItem item]
-[IMPersistentCache _unknownKeysAddObject:]
-[IMImageCache keyForSize:withBaseKey:]
-[IMImageCache firstImageForRootKey:]
-[IMPersistentCache firstImageKeyWithRootKey:]
-[IMImageCache hasImageInMemoryForKey:]
-[IMImageCache imageForKey:completionBlock:queue:]
___copy_helper_block_97
-[IMMemoryCache _checkLimitsAndEvictObjects]
-[IMMemoryCache _shouldRemoveIndex:]
-[_IMMemoryCacheItem conformsToProtocol]
-[IMMemoryCache delegate]
-[_IMMemoryCacheItem key]
-[_IMMemoryCacheItem .cxx_destruct]
__IMPersistentCacheDataProviderReleaseData
-[NSImage(IMCompatibility_Stretching) im_stretchedImageWithLeftCapWidth:middleLength:rightCapWidth:]
-[NSImage(IMCompatibility_Stretching) im_stretchedImageOfSize:leftCapWidth:rightCapWidth:topCapHeight:bottomCapHeight:]
_IMSplitRectIntoSlices
-[IMAssetViewerPlugInInstanceDescriptor initWithPlugInDescriptor:asset:]
-[IMAssetViewerPlugInInstanceDescriptor setAssetViewerDelegate:]
-[IMAssetViewerPlugInInstanceDescriptor asset]
-[IMPlugInManager plugInInstancesPassingTest:]
___50-[IMImageCache imageForKey:completionBlock:queue:]_block_invoke
___destroy_helper_block_98
-[IMLibraryPlist initWithDirectory:fileName:]
-[IMLibraryPlist setPath:]
-[IMLibraryPlist setDirectory:]
-[IMLibraryPlist contents]
-[IMLibraryPlist unfilteredContents]
-[IMLibraryPlist path]
-[IMLibraryPlist _contents:]
-[IMLibraryPlist unfilteredSidecarContents]
-[IMLibraryPlist sidecarPath]
-[IMLibraryPlist directory]
+[IMLibraryPlist keyNameForDeletesArray]
+[IMLibraryPlist keyNameForBooksArray]
+[IMLibraryPlist coverPathFromPlistEntry:]
-[IMLibraryPlist .cxx_destruct]
+[NSString(IMAdditions) pathRelativeToContentBase:forRelativePath:startingFromAbsoluteFolderPath:]
-[NSString(IMAdditions) stringByRemovingURLFragment]
-[IMAssetViewerPlugInInstanceDescriptor assetViewerDelegate]
-[IMAssetViewerPlugInInstanceDescriptor setTitle:]
-[IMAssetViewerPlugInInstanceDescriptor setToolbarItemMask:]
-[IMAssetViewerPlugInInstanceDescriptor toolbarItemMask]
-[IMAssetViewerPlugInInstanceDescriptor setSupportsStudyCards:]
-[IMAssetViewerPlugInInstanceDescriptor setSupportsSearchPageNumber:]
-[IMAssetViewerPlugInInstanceDescriptor defaultSize]
-[IMAssetViewerPlugInInstanceDescriptor minimumSize]
-[NSMutableArray(IMAdditions) updateToMatchArray:removalBlock:insertionBlock:]
-[IMAssetViewerPlugInInstanceDescriptor setContainerBackgroundColor:]
-[NSArray(IMAdditions) objectsMatching:]
-[IMAssetViewerPlugInInstanceDescriptor setDefaultSize:]
-[IMAssetViewerPlugInInstanceDescriptor setMinimumSize:]
+[AEAnnotation predicateForPageBookmarksWithAssetID:]
-[IMAssetViewerPlugInInstanceDescriptor title]
-[IMAssetViewerPlugInInstanceDescriptor tocTitle]
-[IMAssetViewerPlugInInstanceDescriptor containerBackgroundColor]
-[IMAssetViewerPlugInInstanceDescriptor supportsStudyCards]
-[IMAssetViewerPlugInInstanceDescriptor supportsSearchPageNumber]
-[IMLogger logFunction:format:]
-[IMLogger logString:]
-[IMAssetViewerPlugInInstanceDescriptor setTocTitle:]
-[AEAnnotation setAnnotationLocation:]
-[AEAnnotation updateSystemModificationDate]
-[AEAnnotation managedObjectContext]
-[IMDocumentFragmentFilter initWithCoder:]
-[IMBloomFilter initWithCoder:]
___IMBloomFilterCharacterHashProvider_block_invoke
-[IMDocumentFragmentFilter mightContainFragment:]
-[IMDocumentFragmentFilter dealloc]
-[IMBloomFilter dealloc]
-[IMBloomFilter .cxx_destruct]
-[IMDocumentFragmentFilter .cxx_destruct]
___49-[IMDocumentFragmentFilter mightContainFragment:]_block_invoke
-[IMBloomFilter mightContainKey:]
_IMPopulateKeyVectorForKey
___IMBloomFilterCharactersHashProviderInternal_block_invoke
+[AEAnnotation insertAnnotationWithAssetID:creatorIdentifier:annotationUuid:intoManagedObjectContext:]
-[NSManagedObjectContext(IMAdditions) newByClass:]
-[AEAnnotation awakeFromInsert]
+[NSString(IMAdditions) UUID]
-[AEAnnotation setAnnotationStyle:]
-[AEAnnotation updateAllModificationDates]
-[AEAnnotation setUserModificationDate:]
-[AEAnnotation setAnnotationType:]
-[AEAnnotation setChapterTitle:]
-[AEAnnotationManagedObjectContext saveAnnotationProvider]
-[AEAnnotationManagedObjectContext annotationProvider]
-[IMUbiquitousDataProvider saveManagedObjectContext:]
-[IMUbiquitousDataProvider currentPersistentStore]
-[IMUbiquitousDataProvider metadataDictionaryDirty]
+[AEAnnotation predicateForAnnotationsWithAssetIDInList:includingDeleted:]
-[AEAnnotationManagedObjectContext .cxx_destruct]
-[AEAnnotation chapterTitle]
-[AEAnnotationProvider deleteAnnotation:]
-[AEAnnotation setAnnotationDeleted:]
-[IMLogger logFile:lineNumber:format:]
-[IMPlugInInstanceDescriptor setUserDefaults:]
-[IMAssetViewerPlugInInstanceDescriptor saveScreenshot:]
+[IMImageCache defaultCache]
___28+[IMImageCache defaultCache]_block_invoke
-[IMPlugInInstanceDescriptor _screenShotKey]
-[IMImageCache removeImageForKey:synchronous:]
-[IMMemoryCache removeObjectForKey:]
___36-[IMMemoryCache removeObjectForKey:]_block_invoke
-[IMMemoryCache _removeObjectForKey:]
-[IMPersistentCache deleteItemForKey:]
-[IMImageCache setImage:forKey:]
-[IMImageCache setImage:forKey:type:]
-[IMImageCache setImage:forKey:type:persist:]
-[IMImageCache setImage:forKey:type:persist:properties:]
-[NSImage(IMCompatibility) im_CGImages]
___56-[IMImageCache setImage:forKey:type:persist:properties:]_block_invoke
-[IMPersistentCache insertCGImages:forKey:mimeType:baseSize:properties:]
-[IMPersistentCache _insertCGImage:forKey:mimeType:scale:properties:]
-[IMAssetViewerPlugInInstanceDescriptor .cxx_destruct]
-[IMPersistentCache _setCacheSize:]
-[IMPersistentCache _unknownKeysRemoveObject:]
-[IMPersistentCache _scheduleSizeCleanup]
-[IMPlugInManager enumeratePluginInstancesUsingBlock:]
-[NSArray(IMAdditions) im_sortDescriptorComparator]
___51-[NSArray(IMAdditions) im_sortDescriptorComparator]_block_invoke
-[NSImage(IMCompatibility) im_imageWithSize:preserveAspectRatio:]
-[NSImage(IMCompatibility) im_imageWithSize:options:]
-[NSImage(IMCompatibility) im_imageWithPixelSize:]
-[NSImage(IMCompatibility) im_CGImage]
-[IMImageCache removeImageWithRootKey:]
-[IMMemoryCache removeObjectsForKeyWithPrefix:]
___47-[IMMemoryCache removeObjectsForKeyWithPrefix:]_block_invoke
-[IMPersistentCache deleteItemsWithKeyLike:]
-[IMPersistentCache deleteItemsWithAllKeysContaining:]
+[IMDatabaseHandle questionMarkListForCollection:]
-[IMCoreDataSource setMetadataObject:forKey:]
-[IMCoreDataSource copyNextSortValue:forKey:forEntityName:]
-[IMCoreDataSource copyMaxSortValue:forEntityName:]
-[IMCoreDataSource incrementGeneration:]
-[IMCoreDataSource generationValue:]
-[IMCoreDataSource setGenerationValue:forKey:]
-[NSArray(IMAdditions) containsLocalizedStringCaseInsensitive:]
-[IMPlugInInstanceDescriptor setInstanceDescription:]
+[AEUserPublishing sharedInstance]
___34+[AEUserPublishing sharedInstance]_block_invoke
-[AEUserPublishing init]
-[AEUserPublishing cheapStoreURLForStoreId:]
+[AEAnnotationTheme themeForAnnotationStyle:invertedContent:isUnderline:]
+[AEAnnotationTheme themeForAnnotationStyle:invertedContent:]
+[AEAnnotationTheme yellowTheme:]
___33+[AEAnnotationTheme yellowTheme:]_block_invoke_2
-[AEAnnotationTheme setInvertedContent:]
-[AEAnnotationTheme invertedContent]
+[NSColor(IMCompatibility) im_colorWithSRGBRed:green:blue:alpha:]
-[NSString(IMAdditions) tokenCountWithEnumerationOptions:maxTokenCount:outLimitLength:]
___87-[NSString(IMAdditions) tokenCountWithEnumerationOptions:maxTokenCount:outLimitLength:]_block_invoke
-[BKAssetActivityPropertySource initWithAsset:]
-[BKAssetActivityPropertySource propertySource]
-[AEAssetActivityItemProvider initWithAnnotation:propertySource:]
-[AEAssetActivityItemProvider initWithAnnotations:propertySource:]
-[AEAssetActivityItemProvider initWithPropertySource:]
-[AEAssetActivityItemProvider setPaginationDataSource:]
-[AEAssetActivityItemProvider setCitationsAllowed:]
-[IMActivityController initWithActivityItems:applicationActivities:]
-[IMActivityController setCompletionHandler:]
-[IMActivityController sharingServices]
-[IMActivityController expandedActivityItems]
-[IMActivityController activityItems]
-[IMActivityController expandedActivityItemsFromActivityItems:conformingToProtocol:]
-[AEAssetActivityItemProvider expandedItemProviders]
-[AEAssetActivityItemProvider areCitationsAllowed]
-[AEAssetActivityItemProvider propertySource]
-[AEAssetActivityItemProvider shareType]
-[AEAssetActivityItemProvider annotations]
+[AEAnnotationActivityItemProviderSource activityItemProviderSourceWithAnnotations:propertySource:]
-[AEAnnotationActivityItemProviderSource initWithAnnotations:propertySource:]
-[AEAssetActivityItemProviderSource initWithPropertySource:]
-[AEAnnotationActivityItemProviderSource setCitationsAllowed:]
-[AEAssetActivityItemProvider paginationDataSource]
-[AEAnnotationActivityItemProviderSource setPaginationDataSource:]
-[AEAnnotationFacebookActivityItemProvider expandedItemProviders]
-[IMBlockActivityItemProvider initWithUTI:resolutionBlock:]
-[AEAnnotationFacebookActivityItemProvider supportedActivityTypes]
-[IMBlockActivityItemProvider setSupportedActivityTypes:]
-[AEAssetActivityItemProviderSource isStoreAsset]
-[AEAssetActivityItemProviderSource storeId]
-[AEAssetActivityItemProviderSource propertySource]
-[AEAssetActivityItemProviderSource activityType]
___47-[BKAssetActivityPropertySource propertySource]_block_invoke
-[BKAssetActivityPropertySource valueForProperty:activityType:]
-[BKAssetActivityPropertySource asset]
-[AEAnnotationTwitterWeiboActivityItemProvider expandedItemProviders]
-[AEAnnotationTwitterWeiboActivityItemProvider supportedActivityTypes]
-[IMBlockActivityItemProvider activityViewControllerPlaceholderItem:]
-[IMBlockActivityItemProvider UTI]
-[AEAnnotationHTMLActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAnnotationTextActivityItemProvider activityViewControllerPlaceholderItem:]
-[IMActivityController allActivityTypes]
-[IMActivityController sharingServicesRemovingExcludedServicesFromServices:]
-[IMActivityController excludedActivityTypes]
-[IMBlockActivityItemProvider supportedActivityTypes]
-[AEAnnotationHTMLActivityItemProvider supportedActivityTypes]
-[AEAnnotationTextActivityItemProvider supportedActivityTypes]
-[NSSharingService(IMSharingServiceName) im_name]
-[AEAnnotation setAnnotationRepresentativeText:]
-[AEAnnotation setAnnotationSelectedText:]
-[AEAnnotation setAnnotationSelectedTextRange:]
+[AEAnnotationTheme blueTheme:]
___31+[AEAnnotationTheme blueTheme:]_block_invoke
-[AEAnnotationThemeBlue annotationStyle]
-[AEAnnotationTheme isUnderline]
-[AEAnnotationThemeBlue highlightColor]
-[IMActivityController .cxx_destruct]
-[IMBlockActivityItemProvider .cxx_destruct]
-[AEAnnotationActivityItemProviderSource .cxx_destruct]
-[AEAssetActivityItemProviderSource .cxx_destruct]
-[AEAnnotationHTMLActivityItemProvider .cxx_destruct]
-[AEAnnotationTextActivityItemProvider .cxx_destruct]
-[AEAssetActivityItemProvider .cxx_destruct]
-[BKAssetActivityPropertySource .cxx_destruct]
+[AEAnnotationTheme greenTheme:]
___32+[AEAnnotationTheme greenTheme:]_block_invoke
-[AEAnnotationThemeGreen annotationStyle]
-[AEAnnotationThemeGreen highlightColor]
+[AEAnnotation annotationWithUUID:assetID:inManagedObjectContext:]
+[AEAnnotation predicateForAnnotationWithUUID:assetID:]
-[AEAnnotation setAnnotationNote:]
___32+[AEAnnotationTheme greenTheme:]_block_invoke_2
-[AEAnnotationThemeGreen noteBorderColor]
___31+[AEAnnotationTheme blueTheme:]_block_invoke_2
-[AEAnnotationThemeBlue noteBorderColor]
+[AEAnnotationStringFilter filterWithString:options:]
-[AEAnnotationStringFilter initWithString:fields:options:]
-[AEAnnotationPredicateFilter initWithPredicate:]
-[AEAnnotationBlockFilter initConcurrent:withBlock:]
___copy_helper_block_
-[AEAnnotationStringFilter filteredAnnotations:]
-[AEAnnotationPredicateFilter filteredAnnotations:]
-[AEAnnotationBlockFilter filteredAnnotations:]
-[NSArray(IMAdditions) arrayOfObjectsWithOptions:passingTest:]
___47-[AEAnnotationBlockFilter filteredAnnotations:]_block_invoke
___49-[AEAnnotationPredicateFilter initWithPredicate:]_block_invoke
-[AEAnnotationStringFilter enumerateMatchesInAnnotation:forField:usingBlock:]
-[AEAnnotationStringFilter .cxx_destruct]
-[AEAnnotationPredicateFilter .cxx_destruct]
-[AEAnnotationBlockFilter .cxx_destruct]
___destroy_helper_block_
-[NSString(IMAdditions) URLFragmentString]
-[IMImageCache imageForKey:size:]
-[IMImageCache imageForKey:size:forceDecode:]
-[IMImageCache imageForKey:forceDecode:]
+[AEAnnotationTheme purpleTheme:]
___33+[AEAnnotationTheme purpleTheme:]_block_invoke
___33+[AEAnnotationTheme yellowTheme:]_block_invoke
+[AEAnnotationTheme underlineTheme:]
___36+[AEAnnotationTheme underlineTheme:]_block_invoke
-[AEAnnotationThemePurple annotationStyle]
-[AEAnnotationThemeYellow annotationStyle]
-[AEAnnotationThemeUnderline annotationStyle]
-[AEAnnotationThemeUnderline isUnderline]
___36+[AEAnnotationTheme underlineTheme:]_block_invoke_2
-[AEAnnotationThemeUnderline noteBorderColor]
-[AEAnnotationThemePurple highlightColor]
-[AEAnnotationThemeYellow highlightColor]
+[NSURL(IMAdditions) supportediBooksURLSchemes]
___47+[NSURL(IMAdditions) supportediBooksURLSchemes]_block_invoke
+[NSURL(IMAdditions) supportediBooksStoreURLSchemes]
___52+[NSURL(IMAdditions) supportediBooksStoreURLSchemes]_block_invoke
+[NSURL(IMAdditions) ISBNForURI:]
___33+[AEAnnotationTheme purpleTheme:]_block_invoke_2
-[AEAnnotation assetVersion]
-[AEAnnotation physicalPageNumber]
-[AEAssetActivityItemProvider setShareType:]
-[AEAnnotation setAnnotationVersion:]
-[AEAnnotation setAssetVersion:]
-[AEAnnotation setPlStorageUUID:]
-[AEAnnotation userModificationDate]
-[AEAnnotation setPlLocationRangeStart:]
-[AEAnnotation setPlLocationRangeEnd:]
-[AEAnnotation setPlUserData:]
-[AEAnnotation setPlAbsolutePhysicalLocation:]
-[AEAnnotationThemeBlue noteTextColor]
-[AEAnnotationThemeYellow noteBorderColor]
-[AEAnnotationThemeYellow noteTextColor]
-[AEAnnotationTheme noteMarkerStrikethroughColor]
-[AEAnnotationThemeGreen noteMarkerBorderColor]
-[AEAnnotationThemeGreen noteTextColor]
-[NSURL(IMAdditions) isStoreBook]
-[NSURL(IMAdditions) isStoreURL]
-[AEAssetActivityItemProvider pasteboardString]
+[BKSeriesCheck insertSeriesCheckWithAdamId:intoManagedObjectContext:]
+[BKSeriesCheck fetchRequest]
+[BKSeriesCheck predicateForSeriesCheckWithAdamIDsInList:]
+[BKSeriesCheck adamIDsNeedingToBeCheckedFromAdamIDs:inManagedObjectContext:]
+[BKSeriesCheck recordAdamIDsAsChecked:inManagedObjectContext:]
+[BKSeriesCheck shouldRecheckAdamID:inManagedObjectContext:]
-[SFUOffsetInputStream initWithInputStream:]
-[SFUOffsetInputStream initWithInputStream:initialOffset:]
-[SFUOffsetInputStream dealloc]
-[SFUOffsetInputStream offset]
-[SFUOffsetInputStream readToBuffer:size:]
-[SFUOffsetInputStream canSeek]
-[SFUOffsetInputStream seekToOffset:]
-[SFUOffsetInputStream disableSystemCaching]
-[SFUOffsetInputStream enableSystemCaching]
-[SFUOffsetInputStream close]
-[SFUOffsetInputStream closeLocalStream]
-[BKSeriesDatabase init]
+[BKSeriesDatabase managedObjectModelName]
+[BKSeriesDatabase persistentStoreURL]
+[BKSeriesDatabase persistentStoreNameSeed]
+[BKSeriesDatabase persistentStoreVersion]
-[BKSeriesDatabase newManagedObjectContext]
-[BKSeriesManagerUpdater init]
-[BKSeriesManagerUpdater initWithManager:database:completionBlock:]
___67-[BKSeriesManagerUpdater initWithManager:database:completionBlock:]_block_invoke
-[BKSeriesManagerUpdater updateSeriesAdamIds:]
-[BKSeriesManagerUpdater updateAdamIDs:]
-[BKSeriesManagerUpdater updateAndRecheckAdamID:]
___49-[BKSeriesManagerUpdater updateAndRecheckAdamID:]_block_invoke
___copy_helper_block_29
___destroy_helper_block_30
-[BKSeriesManagerUpdater updateAdamIDs:forceCheck:]
___51-[BKSeriesManagerUpdater updateAdamIDs:forceCheck:]_block_invoke
___51-[BKSeriesManagerUpdater updateAdamIDs:forceCheck:]_block_invoke_2
___51-[BKSeriesManagerUpdater updateAdamIDs:forceCheck:]_block_invoke_3
___copy_helper_block_58
___destroy_helper_block_59
___copy_helper_block_61
___destroy_helper_block_62
___copy_helper_block_67
___destroy_helper_block_68
-[BKSeriesManagerUpdater _filteredSeriesProfiles:]
___50-[BKSeriesManagerUpdater _filteredSeriesProfiles:]_block_invoke
___50-[BKSeriesManagerUpdater _filteredSeriesProfiles:]_block_invoke_2
___copy_helper_block_87
___destroy_helper_block_88
___copy_helper_block_95
___destroy_helper_block_96
-[BKSeriesManagerUpdater _updateSeriesAdamIds:]
___47-[BKSeriesManagerUpdater _updateSeriesAdamIds:]_block_invoke
___47-[BKSeriesManagerUpdater _updateSeriesAdamIds:]_block_invoke_2
___47-[BKSeriesManagerUpdater _updateSeriesAdamIds:]_block_invoke_3
___47-[BKSeriesManagerUpdater _updateSeriesAdamIds:]_block_invoke_4
___copy_helper_block_122
___destroy_helper_block_123
___copy_helper_block_125
___destroy_helper_block_126
___copy_helper_block_128
___destroy_helper_block_129
___copy_helper_block_131
___destroy_helper_block_132
-[BKSeriesManagerUpdater _seriesCompleteUpdateSeriesAdamIds:]
-[BKSeriesManagerUpdater _updateSeriesContainersWithSeriesIDs:withProfiles:]
-[BKSeriesManagerUpdater _updateSeriesChildrenWithAdamIDs:seriesProfiles:childProfiles:]
-[BKSeriesManagerUpdater cancel]
___32-[BKSeriesManagerUpdater cancel]_block_invoke
___copy_helper_block_179
___destroy_helper_block_180
-[BKSeriesManagerUpdater finish]
___32-[BKSeriesManagerUpdater finish]_block_invoke
___32-[BKSeriesManagerUpdater finish]_block_invoke_2
___copy_helper_block_213
___destroy_helper_block_214
+[BKSeriesManagerUpdater _populateItem:withItemData:position:seriesId:sequenceDisplayLabel:isContainer:seriesTitle:]
-[BKSeriesManagerUpdater database]
-[BKSeriesManagerUpdater setDatabase:]
-[BKSeriesManagerUpdater manager]
-[BKSeriesManagerUpdater setManager:]
-[BKSeriesManagerUpdater formattedPrices]
-[BKSeriesManagerUpdater setFormattedPrices:]
-[BKSeriesManagerUpdater isFinished]
-[BKSeriesManagerUpdater setFinished:]
-[BKSeriesManagerUpdater queue]
-[BKSeriesManagerUpdater setQueue:]
-[BKSeriesManagerUpdater managedObjectContext]
-[BKSeriesManagerUpdater setManagedObjectContext:]
-[BKSeriesManagerUpdater completionBlock]
-[BKSeriesManagerUpdater setCompletionBlock:]
-[BKSeriesManagerUpdater .cxx_destruct]
___copy_helper_block_
___destroy_helper_block_
+[AEAnnotationPredicateFilter filterWithPredicate:]
-[IMDocumentFragmentFilter initWithDocument:filterSpecification:]
___65-[IMDocumentFragmentFilter initWithDocument:filterSpecification:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMDocumentFragmentFilter encodeWithCoder:]
___copy_helper_block_22
___destroy_helper_block_23
-[IMDocumentFragmentFilter indexSize]
-[IMDocumentFragmentFilter usageDescription]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedUnsignedInteger:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedUnsignedInteger:usesGroupingSeparator:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedDouble:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedDouble:maximumNumberOfDigitsAfterDecimalSeparator:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedPercentage:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedPercentage:maximumNumberOfDigitsAfterDecimalSeparator:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedNumber:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedNumber:maximumNumberOfDigitsAfterDecimalSeparator:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedNumber:numberStyle:]
+[NSNumberFormatter(IMAccessibility) imaxLocalizedNumber:numberStyle:maximumNumberOfDigitsAfterDecimalSeparator:]
+[NSData(Base64) dataWithBase64EncodedString:]
-[NSData(Base64) im_base64Encoding]
+[SFUZipArchiveOutputStream approximateBytesForEntryHeaderWithName:]
-[SFUZipArchiveOutputStream initWithOutputStream:cryptoKey:passphraseHint:]
-[SFUZipArchiveOutputStream initWithPath:]
-[SFUZipArchiveOutputStream initWithPath:cryptoKey:passphraseHint:]
-[SFUZipArchiveOutputStream dealloc]
-[SFUZipArchiveOutputStream beginEntryWithName:isCompressed:uncompressedSize:]
-[SFUZipArchiveOutputStream beginUnknownSizeEntryWithName:isCompressed:]
-[SFUZipArchiveOutputStream beginUncompressedUnknownSizeEntryWithName:]
-[SFUZipArchiveOutputStream setCrc32ForCurrentEntry:]
-[SFUZipArchiveOutputStream writeBuffer:size:]
-[SFUZipArchiveOutputStream canRemoveEntryWithName:]
-[SFUZipArchiveOutputStream removeEntryWithName:]
-[SFUZipArchiveOutputStream setEncryptedDocumentUuid:]
-[SFUZipArchiveOutputStream close]
-[SFUZipArchiveOutputStream moveToPath:]
-[SFUZipArchiveOutputStream entryNames]
-[SFUZipArchiveOutputStream entriesAtPath:]
-[SFUZipArchiveOutputStream flush]
-[SFUZipArchiveOutputStream freeBytes]
-[SFUZipArchiveOutputStream reset]
-[SFUZipArchiveOutputStream crc32ForEntry:]
-[SFUZipArchiveOutputStream(Private) finishEntry]
-[SFUZipArchiveOutputStream(Private) coalesceAndTruncateFreeSpace]
-[SFUZipArchiveOutputStream(Private) writeLocalFileHeaderForEntry:]
-[SFUZipArchiveOutputStream(Private) writeCentralFileHeaderUsingEntry:isFirstEntry:]
-[SFUZipArchiveOutputStream(Private) writeEndOfCentralDirectoryWithOffset:]
-[SFUZipArchiveOutputStream(Private) writeZip64EndOfCentralDirectoryWithOffset:]
-[SFUZipArchiveOutputStream(Private) writeZip64EndOfCentralDirectoryLocatorWithOffset:]
-[SFUZipOutputEntry dealloc]
-[SFUZipOutputEntry description]
-[SFUZipOutputEntry compareByOffset:]
-[SFUZipFreeSpaceEntry compareByOffset:]
-[IMPlugInDescriptor .cxx_destruct]
-[IMPlugInInstanceDescriptor userDefaultsKey]
-[IMAssetViewerPlugInInstanceDescriptor lastScreenshot]
-[IMAssetViewerPlugInInstanceDescriptor shouldMaintainAspectRatio]
-[IMAssetViewerPlugInInstanceDescriptor setShouldMaintainAspectRatio:]
-[IMAssetViewerPlugInInstanceDescriptor locationToSelect]
-[IMAssetViewerPlugInInstanceDescriptor setLocationToSelect:]
___copy_helper_block_
___destroy_helper_block_
-[IMPlugInManager createObjectForIdentifier:instanceDescription:]
-[IMPlugInManager .cxx_destruct]
+[IMUserAgent _getSystemVersionMajor:minor:bugfix:]
___51+[IMUserAgent _getSystemVersionMajor:minor:bugfix:]_block_invoke
+[IMUserAgent _macOSXVersionString]
___35+[IMUserAgent _macOSXVersionString]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[IMUserAgent _userVisibleWebKitVersionString]
___46+[IMUserAgent _userVisibleWebKitVersionString]_block_invoke
+[IMUserAgent _macOSXBuildString]
___33+[IMUserAgent _macOSXBuildString]_block_invoke
+[IMUserAgent clientUserAgent]
-[SFUBufferedInputStream initWithStream:]
-[SFUBufferedInputStream initWithStream:bufferSize:]
-[SFUBufferedInputStream initWithStream:dataLength:]
-[SFUBufferedInputStream dealloc]
-[SFUBufferedInputStream offset]
-[SFUBufferedInputStream readToBuffer:size:]
-[SFUBufferedInputStream readToOwnBuffer:size:]
-[SFUBufferedInputStream seekWithinBufferToOffset:]
-[SFUBufferedInputStream canSeek]
-[SFUBufferedInputStream seekToOffset:]
-[SFUBufferedInputStream disableSystemCaching]
-[SFUBufferedInputStream enableSystemCaching]
-[SFUBufferedInputStream close]
-[SFUBufferedInputStream closeLocalStream]
-[IMPlatformAbstraction isSandboxed]
-[IMPlatformAbstraction reportError]
-[IMPlatformAbstraction .cxx_destruct]
-[IMLogger setAuxPath:]
-[IMLogger auxPath]
-[IMLogger setLogToFileOnly:]
-[IMLogger logTofileOnly]
-[IMLogger addRuntimeOverride:]
-[IMLogger removeRuntimeOverride:]
+[IMLogger rolledLogPrefix]
+[IMLogger rollLogPath:maxSize:]
+[IMLogger deleteRolledLogsForLogPath:maxAge:]
-[IMLogger filter]
-[IMLogger setFilter:]
-[IMLogger setRuntimeOverride:]
-[IMLogger .cxx_destruct]
-[AEAssetActivityItemProvider pasteboardRepresentation]
-[AEAssetActivityItemProvider setAnnotations:]
-[AEAssetActivityItemProvider setPropertySource:]
-[AEAssetActivityItemProvider activityType]
-[AEAssetActivityItemProvider setActivityType:]
-[AEAssetActivityItemProvider(Pasteboard) writableTypesForPasteboard:]
-[AEAssetActivityItemProvider(Pasteboard) pasteboardPropertyListForType:]
+[IMStopWatch initialize]
-[IMStopWatch init]
+[IMStopWatch stopwatchWithDescription:]
+[IMStopWatch stopwatch]
-[IMStopWatch start]
-[IMStopWatch time]
-[IMStopWatch reset]
-[IMStopWatch setDescription:]
-[IMStopWatch description]
-[IMStopWatch report]
-[IMStopWatch reportWithMarker:]
-[IMStopWatch .cxx_destruct]
-[AEAssetHTMLGenerator documentString]
-[AEAssetHTMLGenerator userPublishing:assetAuthorForStoreId:]
-[AEAssetHTMLGenerator userPublishing:assetTitleForStoreId:]
-[AEAssetHTMLGenerator userPublishing:assetCategoryForStoreId:]
-[AEAssetHTMLGenerator userPublishing:assetCoverImageForStoreId:]
-[AEAssetHTMLGenerator userPublishing:storeURLForStoreId:]
-[AEAssetHTMLGenerator styleSection]
-[AEAssetHTMLGenerator insertionHeaderSection]
-[AEAssetHTMLGenerator bookInfoSection]
-[AEAssetHTMLGenerator appsSection]
-[AEAssetHTMLGenerator disclaimerSection]
-[AEAssetHTMLGenerator storeURL]
-[AEAssetHTMLGenerator bookURL]
-[AEAssetHTMLGenerator citationIncludingStoreURL:]
-[AEAssetHTMLGenerator storeLink]
-[AEAssetHTMLGenerator templateStringForName:]
-[AEAssetHTMLGenerator storeId]
-[AEAssetHTMLGenerator setStoreId:]
-[AEAssetHTMLGenerator epubId]
-[AEAssetHTMLGenerator setEpubId:]
-[AEAssetHTMLGenerator title]
-[AEAssetHTMLGenerator setTitle:]
-[AEAssetHTMLGenerator author]
-[AEAssetHTMLGenerator setAuthor:]
-[AEAssetHTMLGenerator sortAuthor]
-[AEAssetHTMLGenerator setSortAuthor:]
-[AEAssetHTMLGenerator publisherLocation]
-[AEAssetHTMLGenerator setPublisherLocation:]
-[AEAssetHTMLGenerator publisherName]
-[AEAssetHTMLGenerator setPublisherName:]
-[AEAssetHTMLGenerator publisherYear]
-[AEAssetHTMLGenerator setPublisherYear:]
-[AEAssetHTMLGenerator readingDirection]
-[AEAssetHTMLGenerator setReadingDirection:]
-[AEAssetHTMLGenerator genre]
-[AEAssetHTMLGenerator setGenre:]
-[AEAssetHTMLGenerator dataSource]
-[AEAssetHTMLGenerator setDataSource:]
-[AEAssetHTMLGenerator isContentProtected]
-[AEAssetHTMLGenerator setContentProtected:]
-[AEAssetHTMLGenerator isForPrint]
-[AEAssetHTMLGenerator setForPrint:]
-[AEAssetHTMLGenerator .cxx_destruct]
-[NSMutableString(AEAssetHTMLGenerator) AEReplaceTemplatePlaceholder:withString:]
-[NSString(AEAnnotationHTMLGenerator) im_stringByReplacingNewLinesWithHTMLBreaks]
-[NSData(Gzip) gzipInflate]
-[AEAnnotationGroupRTFGenerator attributedString]
-[AEAnnotationGroupRTFGenerator p_attributedStringForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_dateStringForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_pageNumberStringForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_highlightStringForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_noteStringForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_dateStringAttributesForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_pageNumberStringAttributesForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_highlightStringAttributesForAnnotation:]
-[AEAnnotationGroupRTFGenerator p_noteStringAttributesForAnnotation:]
-[AEAnnotationGroupRTFGenerator annotations]
-[AEAnnotationGroupRTFGenerator setAnnotations:]
-[AEAnnotationGroupRTFGenerator areCitationsAllowed]
-[AEAnnotationGroupRTFGenerator setCitationsAllowed:]
-[AEAnnotationGroupRTFGenerator bookCitationString]
-[AEAnnotationGroupRTFGenerator setBookCitationString:]
-[AEAnnotationGroupRTFGenerator bookURLPrefix]
-[AEAnnotationGroupRTFGenerator setBookURLPrefix:]
-[AEAnnotationGroupRTFGenerator bookURL]
-[AEAnnotationGroupRTFGenerator setBookURL:]
-[AEAnnotationGroupRTFGenerator .cxx_destruct]
-[NSMutableAttributedString(AERTFGeneratorAdditions) appendString:]
-[NSMutableAttributedString(AERTFGeneratorAdditions) appendString:withFont:]
-[NSMutableAttributedString(AERTFGeneratorAdditions) appendString:withFontName:fontSize:]
-[NSMutableAttributedString(AERTFGeneratorAdditions) appendURL:withFontName:fontSize:]
+[NSAttributedString(AERTFGeneratorAdditions) attributedStringWithString:attributes:]
+[AEAnnotation fetchRequest]
+[AEAnnotation predicateForAnnotationsWithUUIDInList:assetID:]
+[AEAnnotation predicateForAllAnnotationsIncludingDeleted:]
+[AEAnnotation predicateForUserAnnotationsWithAssetID:includingDeleted:]
+[AEAnnotation predicateForUserAnnotationsWithAssetIDInList:includingDeleted:]
+[AEAnnotation predicateForRangeAnnotationsWithAssetID:]
+[AEAnnotation predicateForAnnotationsWithLocation:includingDeleted:]
+[AEAnnotation predicateForAnnotationsWithUserModificationDate]
+[AEAnnotation predicateForGlobalAnnotationsMissingReadingProgressHighWaterMark]
+[AEAnnotation dictionaryResultsForAssetsWithPredicate:properties:inManagedObjectContext:]
+[AEAnnotation annotationsWithAssetIDInList:includingDeleted:inManagedObjectContext:]
+[AEAnnotation annotationsWithUUIDInList:assetID:inManagedObjectContext:]
+[AEAnnotation maxUserModificationDateExpressionDescription]
+[AEAnnotation maxModificationDateForAllAnnotationsInManagedObjectContext:]
+[AEAnnotation optimizedSelectedTextForSerialization:]
+[AEAnnotation optimizedRepresentativeTextForSerialization:selectedText:]
-[AEAnnotation updateUserModificationDate]
-[AEAnnotation setAnnotationIsUnderline:]
-[AEAnnotation annotationHasNote]
-[AEAnnotation setPhysicalPageNumber:]
-[AEAnnotation setAttachments:]
-[AEAnnotation attachments]
-[AEAnnotation annotationSelectedTextRange]
-[AEAnnotation readingProgressHighWaterMark]
-[AEAnnotation setReadingProgressHighWaterMark:]
-[AEAnnotation setFutureProofing1:]
-[AEAnnotation setFutureProofing2:]
-[AEAnnotation setFutureProofing3:]
-[AEAnnotation setFutureProofing4:]
-[AEAnnotation setFutureProofing5:]
-[AEAnnotation setFutureProofing6:]
-[AEAnnotation setFutureProofing7:]
-[AEAnnotation setFutureProofing8:]
-[AEAnnotation setFutureProofing9:]
-[AEAnnotation setFutureProofing10:]
-[AEAnnotation setFutureProofing11:]
-[AEAnnotation setFutureProofing12:]
-[AEAnnotation bumpAnnotationVersionToMinimumVersion:]
-[AEAnnotation bumpReadingProgressHighWaterMarkToProgress:]
-[AEAnnotation hasReadingProgressHighWaterMark]
+[AEAnnotation(AEAnnotatedAttributedString) annotatedAttributedStringWithString:annotationStyle:range:]
-[AEAnnotation(AEAnnotatedAttributedString) annotatedAttributedString]
+[AEAnnotation(AEAnnotatedAttributedString) annotatedAttributedStringForAnnotation:withPossibleLength:]
+[AEAnnotation(AEAnnotatedAttributedString) isSelectedTextRepeatedInRepresentativeTextForAnnotation:]
+[AEAnnotation(AEAnnotatedAttributedString) clauseForSelectedTextForAnnotation:inSentence:possibleLength:highlightedRange:]
+[AEAnnotation(AEAnnotatedAttributedString) wordsForSelectedTextForAnnotation:inSentence:possibleLength:highlightedRange:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___122+[AEAnnotation(AEAnnotatedAttributedString) wordsForSelectedTextForAnnotation:inSentence:possibleLength:highlightedRange:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[AEAnnotation(AEAnnotatedAttributedString) lettersForSelectedTextForAnnotation:inSentence:possibleLength:highlightedRange:]
+[AEAnnotation(AEAnnotatedAttributedString) contextAwareSelectedTextFromAnnotation:]
___84+[AEAnnotation(AEAnnotatedAttributedString) contextAwareSelectedTextFromAnnotation:]_block_invoke
___84+[AEAnnotation(AEAnnotatedAttributedString) contextAwareSelectedTextFromAnnotation:]_block_invoke_2
___copy_helper_block_563
___destroy_helper_block_564
___copy_helper_block_566
___destroy_helper_block_567
-[NSString(AEAnnotationExtras) flattenedAnnotationString]
___57-[NSString(AEAnnotationExtras) flattenedAnnotationString]_block_invoke
-[NSString(AEAnnotationExtras) ae_occurrenceCountOfString:]
-[AESingleAnnotationHTMLGenerator init]
-[AESingleAnnotationHTMLGenerator documentString]
-[AESingleAnnotationHTMLGenerator characterCountLimitforAnnotation:]
-[AESingleAnnotationHTMLGenerator annotation]
-[AESingleAnnotationHTMLGenerator chapterTitle]
-[AESingleAnnotationHTMLGenerator excerpt]
-[AESingleAnnotationHTMLGenerator userPublishing:isLocalGenerationEnabledForStoreId:]
-[AESingleAnnotationHTMLGenerator annotations]
-[AESingleAnnotationHTMLGenerator setAnnotations:]
-[AESingleAnnotationHTMLGenerator areCitationsAllowed]
-[AESingleAnnotationHTMLGenerator setCitationsAllowed:]
-[AESingleAnnotationHTMLGenerator paginationDataSource]
-[AESingleAnnotationHTMLGenerator setPaginationDataSource:]
-[AESingleAnnotationHTMLGenerator wordLimit]
-[AESingleAnnotationHTMLGenerator setWordLimit:]
-[AESingleAnnotationHTMLGenerator .cxx_destruct]
+[AEAnnotation(BKBookmark) mergeAnnotation:withServerAnnotation:moc:]
+[AEAnnotation(BKBookmark) mergeServerAnnotations:forAssetID:intoMoc:]
+[AEAnnotation(BKBookmark) _dictionaryRepresentationForAnnotationsMatchingPredicate:map:inManagedObjectContext:]
+[AEAnnotation(BKBookmark) modernDictionaryRepresentationForAnnotationsMatchingPredicate:inManagedObjectContext:]
+[AEAnnotation(BKBookmark) compatibleDictionaryRepresentationForAnnotationsMatchingPredicate:inManagedObjectContext:]
+[AEAnnotation(BKBookmark) aeAnnotationDictionaryRepresentationsForAnnotations:]
+[AEAnnotation(BKBookmark) dictionaryResultsForAnnotationsWithPredicate:properties:propertyNamesMap:inManagedObjectContext:]
___124+[AEAnnotation(BKBookmark) dictionaryResultsForAnnotationsWithPredicate:properties:propertyNamesMap:inManagedObjectContext:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AEAnnotation(BKBookmark) deserializeFromDictionary:trustedSource:]
-[AEAnnotation(BKBookmark) aeAnnotationDeserializeFromDictionary:trustedSource:]
+[AEAnnotation(BKBookmark) isValidForDeserialization:]
-[AEAnnotation(BKBookmark) iBooks_dictionaryRepresentation]
-[AEAnnotation(BKBookmark) iBooks_deserializeFromDictionary:trustedSource:]
-[AEAnnotation(BKBookmark) bkBookmarkDeserializeLocationDataFromDictionary:trustedSource:]
+[AEAnnotation(BKBookmark) annotationStyleFromBookmarkColor:]
+[AEAnnotation(BKBookmark) bookmarkColorFromAnnotationStyle:]
+[AEAnnotation(BKBookmark) annotationTypeFromBookmarkType:]
+[AEAnnotation(BKBookmark) bookmarkTypeFromAnnotationType:]
+[AEAnnotation(BKBookmark) annotationUuidFromDictionaryRepresentation:]
+[AEAnnotation(BKBookmark) annotationAssetIDFromDictionaryRepresentation:]
+[AEAnnotation(BKBookmark) lastModificationFromDictionaryRepresentation:]
+[AEAnnotation(BKBookmark) deletedFlagFromDictionaryRepresentation:]
+[AEAnnotation(BKBookmark) annotationCreatorIdentifierFromDictionaryRepresentation:]
+[AEAnnotation(BKBookmark) annotationTypeFromDictionaryRepresentation:]
-[AEAnnotation(BKBookmark) validateAnnotationUuid]
-[SFUZipArchiveMemoryDataRepresentation initWithData:]
-[SFUZipArchiveMemoryDataRepresentation dealloc]
-[SFUZipArchiveMemoryDataRepresentation data]
-[SFUZipArchiveMemoryDataRepresentation isReadable]
-[SFUZipArchiveMemoryDataRepresentation dataLength]
-[SFUZipArchiveMemoryDataRepresentation inputStream]
-[SFUZipArchiveMemoryDataRepresentation bufferedInputStream]
-[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithBufferSize:]
-[SFUZipArchiveMemoryDataRepresentation hasSameLocationAs:]
-[SFUZipArchiveMemoryDataRepresentation inputStreamWithOffset:length:]
-[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:]
-[SFUOffsetOutputStream initWithOutputStream:]
-[SFUOffsetOutputStream dealloc]
-[SFUOffsetOutputStream writeBuffer:size:]
-[SFUOffsetOutputStream canSeek]
-[SFUOffsetOutputStream seekToOffset:whence:]
-[SFUOffsetOutputStream offset]
-[SFUOffsetOutputStream canCreateInputStream]
-[SFUOffsetOutputStream inputStream]
-[SFUOffsetOutputStream close]
-[SFUOffsetOutputStream closeLocalStream]
-[SFUZipDeflateOutputStream initWithOutputStream:]
-[SFUZipDeflateOutputStream dealloc]
-[SFUZipDeflateOutputStream closeLocalStream]
-[SFUZipDeflateOutputStream close]
-[SFUZipDeflateOutputStream writeBuffer:size:]
-[SFUZipDeflateOutputStream canSeek]
-[SFUZipDeflateOutputStream seekToOffset:whence:]
-[SFUZipDeflateOutputStream offset]
-[SFUZipDeflateOutputStream canCreateInputStream]
-[SFUZipDeflateOutputStream inputStream]
+[NSException(SFUtilityAdditions) errnoRaise:format:]
-[NSException(SFUtilityAdditions) localErrno]
+[NSFont(IMAdditions) im_safeFontWithName:size:]
___48+[NSFont(IMAdditions) im_safeFontWithName:size:]_block_invoke
-[NSView(IMAccessibility) imaxFrameFromBounds:]
-[NSView(IMAccessibility) imaxFrameToBounds:]
-[NSView(IMAccessibility) imaxScreenScale]
-[AEAnnotationGroupHTMLGenerator documentString]
-[AEAnnotationGroupHTMLGenerator headBody]
-[AEAnnotationGroupHTMLGenerator annotationsBody]
-[AEAnnotationGroupHTMLGenerator tailBody]
-[AEAnnotationGroupHTMLGenerator bookTitleSection]
-[AEAnnotationGroupHTMLGenerator chapterTitleForAnnotation:]
-[AEAnnotationGroupHTMLGenerator htmlHighlightForString:style:isUnderline:]
-[AEAnnotationGroupHTMLGenerator htmlAnnotatedStringForAnnotation:]
___67-[AEAnnotationGroupHTMLGenerator htmlAnnotatedStringForAnnotation:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AEAnnotationGroupHTMLGenerator CSSClassForStyle:]
-[AEAnnotationProvider iCloudEnabledInUserDefaults]
-[AEAnnotationProvider init]
-[AEAnnotationProvider refreshAnnotations:inManagedObjectContext:]
-[AEAnnotationProvider exportAnnotationsMatchingPredicate:toURL:withType:error:]
-[AEAnnotationProvider acknowledgeMergingAnnotationsWithAssetVersionMismatch:assetID:]
+[AEAnnotationProvider cacheKeyForService:]
-[AEAnnotationProvider cachedMaxModificationTimeIntervalSince1970ForService:]
-[AEAnnotationProvider cachedMaxModificationDateForService:]
-[AEAnnotationProvider cacheMaxModificationDate:forService:]
-[AEAnnotationProvider cachedMaxModificationDate]
-[AEAnnotationProvider cacheMaxModificationDate:]
-[AEAnnotationProvider currentMaxModificationDate]
-[AEAnnotationProvider currentMaxModificationDateInManagedObjectContext:]
-[AEAnnotationProvider migrateFromPersistentStoreCoordinator:toPersistentStoreCoordinator:withPredicate:]
-[AEAnnotationProvider migrateFromPersistentStoreCoordinator:toPersistentStoreCoordinator:]
+[AEAnnotationProvider ubiquityPeerIDOverride]
+[AEAnnotationProvider managedObjectModelBundle]
-[AEAnnotationProvider upgradeAnnotationsIfNeeded]
-[AEAnnotationProvider acknowledgedMismatchingAssetIDs]
-[AEAnnotationProvider setAcknowledgedMismatchingAssetIDs:]
-[AEAnnotationProvider delegate]
-[AEAnnotationProvider .cxx_destruct]
-[SFUFileDataRepresentation initWithPath:]
-[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:]
-[SFUFileDataRepresentation initWithPath:cryptoKey:dataLength:]
-[SFUFileDataRepresentation initWithPath:sharedFileDescriptor:cryptoKey:dataLength:]
-[SFUFileDataRepresentation initWithCopyOfData:path:]
-[SFUFileDataRepresentation initWithCopyOfData:path:cryptoKey:]
-[SFUFileDataRepresentation initWithInputStream:cryptoKey:dataLength:]
-[SFUFileDataRepresentation dealloc]
-[SFUFileDataRepresentation description]
-[SFUFileDataRepresentation path]
-[SFUFileDataRepresentation fileType]
-[SFUFileDataRepresentation setFileType:]
-[SFUFileDataRepresentation isReadable]
-[SFUFileDataRepresentation dataLength]
-[SFUFileDataRepresentation encodedLength]
-[SFUFileDataRepresentation isEncrypted]
-[SFUFileDataRepresentation isCryptoKeyIdenticalToKey:]
-[SFUFileDataRepresentation inputStream]
-[SFUFileDataRepresentation hasSameLocationAs:]
-[SFUFileDataRepresentation deleteFileWhenDone]
-[SFUFileDataRepresentation cgDataProvider]
-[SFUFileDataRepresentation(Private) readFileAttributes]
-[IMJPEGPrefetch initWithData:optimalSize:]
-[IMJPEGPrefetch initWithData:optimalSize:options:]
-[IMJPEGPrefetch dealloc]
-[IMJPEGPrefetch loadData:]
-[IMJPEGPrefetch _startDecodeWithData:]
___39-[IMJPEGPrefetch _startDecodeWithData:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMJPEGPrefetch _cancel]
-[IMJPEGPrefetch _uncancel]
-[IMJPEGPrefetch cachedImage]
___29-[IMJPEGPrefetch cachedImage]_block_invoke
___copy_helper_block_8
___destroy_helper_block_9
___29-[IMJPEGPrefetch cachedImage]_block_invoke11
___copy_helper_block_12
___destroy_helper_block_13
-[IMJPEGPrefetch cachedImageIfAvailable]
-[IMJPEGPrefetch cancelPrefetchRequest]
___39-[IMJPEGPrefetch cancelPrefetchRequest]_block_invoke
___copy_helper_block_17
___destroy_helper_block_18
-[IMJPEGPrefetch addImageHandler:queue:]
___40-[IMJPEGPrefetch addImageHandler:queue:]_block_invoke
___40-[IMJPEGPrefetch addImageHandler:queue:]_block_invoke_2
___40-[IMJPEGPrefetch addImageHandler:queue:]_block_invoke_3
___copy_helper_block_32
___destroy_helper_block_33
___copy_helper_block_35
___destroy_helper_block_36
___copy_helper_block_38
___destroy_helper_block_39
-[IMJPEGPrefetch isPrefetchCancelled]
-[IMJPEGPrefetch .cxx_destruct]
+[IMUbiquitousDataProvider ubiquityQueue]
-[IMUbiquitousDataProvider init]
-[IMUbiquitousDataProvider initWithPersistentStoreURL:]
-[IMUbiquitousDataProvider dealloc]
-[IMUbiquitousDataProvider reset]
-[IMUbiquitousDataProvider isReady]
-[IMUbiquitousDataProvider isUploadingUbiquitousLogs]
-[IMUbiquitousDataProvider newManagedObjectContext]
___copy_helper_block_
___destroy_helper_block_
-[IMUbiquitousDataProvider updateCurrentPersistentStore]
-[IMUbiquitousDataProvider setGenerationValue:forKey:]
-[IMUbiquitousDataProvider generationValue:]
-[IMUbiquitousDataProvider incrementGeneration:]
-[IMUbiquitousDataProvider setMetadataObject:forKey:]
___53-[IMUbiquitousDataProvider setMetadataObject:forKey:]_block_invoke
___copy_helper_block_145
___destroy_helper_block_146
-[IMUbiquitousDataProvider metadataObjectForKey:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___49-[IMUbiquitousDataProvider metadataObjectForKey:]_block_invoke
___copy_helper_block_150
___destroy_helper_block_151
-[IMUbiquitousDataProvider notifyAnnotationsUpdated:]
___53-[IMUbiquitousDataProvider notifyAnnotationsUpdated:]_block_invoke
___copy_helper_block_164
___destroy_helper_block_165
-[IMUbiquitousDataProvider applicationDidBecomeActive:]
-[IMUbiquitousDataProvider loadBringUpPersistentStore]
___54-[IMUbiquitousDataProvider loadBringUpPersistentStore]_block_invoke
___copy_helper_block_223
___destroy_helper_block_224
-[IMUbiquitousDataProvider loadUbiquityPersistentStoreWithCompletionBlock:]
___75-[IMUbiquitousDataProvider loadUbiquityPersistentStoreWithCompletionBlock:]_block_invoke
___75-[IMUbiquitousDataProvider loadUbiquityPersistentStoreWithCompletionBlock:]_block_invoke_2
___75-[IMUbiquitousDataProvider loadUbiquityPersistentStoreWithCompletionBlock:]_block_invoke_3
___copy_helper_block_234
___destroy_helper_block_235
___copy_helper_block_242
___destroy_helper_block_243
___copy_helper_block_245
___destroy_helper_block_246
-[IMUbiquitousDataProvider migrateFromPersistentStoreCoordinator:toPersistentStoreCoordinator:]
-[IMUbiquitousDataProvider removePersistentStores]
-[IMUbiquitousDataProvider cacheMetadataDictionary]
-[IMUbiquitousDataProvider isEnabled]
-[IMUbiquitousDataProvider isUbiquityEnabled]
+[IMUbiquitousDataProvider managedObjectModelName]
+[IMUbiquitousDataProvider managedObjectModelBundle]
-[IMUbiquitousDataProvider prefligthUbiquityBaseline:]
___54-[IMUbiquitousDataProvider prefligthUbiquityBaseline:]_block_invoke
___copy_helper_block_297
___destroy_helper_block_298
-[IMUbiquitousDataProvider scheduleRetryTimerWithCompletionBlock:]
___66-[IMUbiquitousDataProvider scheduleRetryTimerWithCompletionBlock:]_block_invoke
___copy_helper_block_309
___destroy_helper_block_310
___66-[IMUbiquitousDataProvider scheduleRetryTimerWithCompletionBlock:]_block_invoke312
___copy_helper_block_313
___destroy_helper_block_314
-[IMUbiquitousDataProvider generateUbiquityUUID]
-[IMUbiquitousDataProvider isUbiquityUUIDValid]
-[IMUbiquitousDataProvider ubiquityUUIDFileURL]
-[IMUbiquitousDataProvider ubiquityUUIDFileName]
-[IMUbiquitousDataProvider localUbiquityUUID]
-[IMUbiquitousDataProvider setLocalUbiquityUUID:]
-[IMUbiquitousDataProvider remoteUbiquityUUID]
___46-[IMUbiquitousDataProvider remoteUbiquityUUID]_block_invoke
___copy_helper_block_348
___destroy_helper_block_349
-[IMUbiquitousDataProvider setRemoteUbiquityUUID:]
___50-[IMUbiquitousDataProvider setRemoteUbiquityUUID:]_block_invoke
___copy_helper_block_355
___destroy_helper_block_356
+[IMUbiquitousDataProvider ubiquityUUIDUserDefaultsKey]
-[IMUbiquitousDataProvider ubiquitousStoreRetryTimer]
-[IMUbiquitousDataProvider setUbiquitousStoreRetryTimer:]
-[IMUbiquitousDataProvider setUbiquityEnabled:]
-[IMUbiquitousDataProvider currentPersistentStoreType]
-[IMUbiquitousDataProvider bringUpPersistentStoreLoader]
-[IMUbiquitousDataProvider setBringUpPersistentStoreLoader:]
-[IMUbiquitousDataProvider setLocalPersistentStoreLoader:]
-[IMUbiquitousDataProvider ubiquityPersistentStoreLoader]
-[IMUbiquitousDataProvider setUbiquityPersistentStoreLoader:]
-[IMUbiquitousDataProvider metadataDictionary]
-[IMUbiquitousDataProvider setMetadataDictionary:]
-[IMUbiquitousDataProvider setMetadataDictionaryDirty:]
-[IMUbiquitousDataProvider .cxx_destruct]
-[NSManagedObjectContext(IMUbiquitouDataProvider) mergeChangesFromUbiquitousDataProviderDidUpdateNotification:]
-[NSManagedObjectContext(IMUbiquitouDataProvider) mergeChangesFromContextDidSaveNotificationTakingIntoAccountManagedObjectIDsPersistentStore:]
-[IMUbiquitousPersistentStoreLoader initWithPersistentStoreURL:]
-[IMUbiquitousPersistentStoreLoader init]
-[IMUbiquitousPersistentStoreLoader storeFileExists]
-[IMUbiquitousPersistentStoreLoader deletePersistentStore]
-[IMUbiquitousPersistentStoreLoader ubiquitousContainerURL]
-[IMUbiquitousPersistentStoreLoader persistentStoreURL]
-[IMUbiquitousPersistentStoreLoader managedObjectModelName]
-[IMUbiquitousPersistentStoreLoader isUbiquitous]
-[IMUbiquitousPersistentStoreLoader setIsUbiquitous:]
-[IMUbiquitousPersistentStoreLoader ubiquitousStoreIdentifier]
-[IMUbiquitousPersistentStoreLoader setUbiquitousStoreIdentifier:]
-[IMUbiquitousPersistentStoreLoader setUbiquitousContentName:]
-[IMUbiquitousPersistentStoreLoader ubiquitousPeerIDOverride]
-[IMUbiquitousPersistentStoreLoader setUbiquitousPeerIDOverride:]
-[IMUbiquitousPersistentStoreLoader .cxx_destruct]
+[IMCoreDataSource persistentStoreVersion]
+[IMCoreDataSource persistentStoreNameSeed]
-[IMCoreDataSource newManagedObjectContext]
___45-[IMCoreDataSource saveManagedObjectContext:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMCoreDataSource _loadPersistentStoreAndRetryIfNeeded:]
___45-[IMCoreDataSource setMetadataObject:forKey:]_block_invoke
___copy_helper_block_166
___destroy_helper_block_167
___Block_byref_object_copy_
___Block_byref_object_dispose_
___41-[IMCoreDataSource metadataObjectForKey:]_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
-[IMCoreDataSource .cxx_destruct]
-[AEUserPublishingProductProfile initWithProfileDictionary:]
-[AEUserPublishingProductProfile urlForCoverImageOfSize:]
-[AEUserPublishingProductProfile _isContentRatingExplicitForInfo:]
-[AEUserPublishingProductProfile isExplicit]
-[AEUserPublishingProductProfile _offer]
-[AEUserPublishingProductProfile buyParameters]
-[AEUserPublishingProductProfile isPreorder]
-[AEUserPublishingProductProfile objectForKey:]
-[AEUserPublishingProductProfile description]
-[AEUserPublishingProductProfile profileDictionary]
-[AEUserPublishingProductProfile setProfileDictionary:]
-[AEUserPublishingProductProfile .cxx_destruct]
-[SFUZipInflateInputStream initWithOffset:end:uncompressedSize:crc:dataRepresentation:]
-[SFUZipInflateInputStream initWithInput:]
-[SFUZipInflateInputStream dealloc]
-[SFUZipInflateInputStream readToOwnBuffer:size:]
-[SFUZipInflateInputStream readToBuffer:size:]
-[SFUZipInflateInputStream seekToOffset:]
-[SFUZipInflateInputStream canSeek]
-[SFUZipInflateInputStream offset]
-[SFUZipInflateInputStream disableSystemCaching]
-[SFUZipInflateInputStream enableSystemCaching]
-[SFUZipInflateInputStream close]
-[SFUZipInflateInputStream closeLocalStream]
-[SFUZipInflateInputStream totalCompressedBytesConsumed]
-[SFUZipInflateInputStream(Private) setupInflateStream]
-[NSManagedObjectContext(IMAdditions) countEntity:withPredicate:]
-[NSManagedObjectContext(IMAdditions) copyEntityProperty:fromEntityName:withPredicate:]
-[NSManagedObjectContext(IMAdditions) objectIDsWithPredicate:forEntity:]
-[NSManagedObjectContext(IMAdditions) unbatchedObjectsWithPredicate:forEntity:]
-[NSManagedObjectContext(IMAdditions) entity:withPredicate:]
-[NSManagedObjectContext(BatchDelete) batchDeleteEntity:matching:prefetchRelationships:]
-[NSManagedObjectContext(IMWorkaround) workaround11293869ForUpdatedSet:]
___72-[NSManagedObjectContext(IMWorkaround) workaround11293869ForUpdatedSet:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[SFUMemoryOutputStream initWithData:]
-[SFUMemoryOutputStream dealloc]
-[SFUMemoryOutputStream writeBuffer:size:]
-[SFUMemoryOutputStream canSeek]
-[SFUMemoryOutputStream seekToOffset:whence:]
-[SFUMemoryOutputStream offset]
-[SFUMemoryOutputStream canCreateInputStream]
-[SFUMemoryOutputStream inputStream]
-[SFUMemoryOutputStream close]
-[SFUMemoryOutputStream closeLocalStream]
+[AEAssetActivityItemProviderSource activityItemProviderWithPropertySource:]
+[AEAssetActivityItemProviderSource citationWithPropertySource:activityType:storeURL:pageRange:]
___96+[AEAssetActivityItemProviderSource citationWithPropertySource:activityType:storeURL:pageRange:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[AEAssetActivityItemProviderSource citation]
-[AEAssetActivityItemProviderSource assetCoverForHTMLGenerator:]
-[AEAssetActivityItemProviderSource storeURLForHTMLGenerator:]
-[AEAssetActivityItemProviderSource HTMLGenerator:citationForStoreURL:]
-[AEAssetActivityItemProviderSource checkoutBookStringForHTMLGenerator:]
-[AEAssetActivityItemProviderSource populateHTMLGenerator:]
-[AEAssetActivityItemProviderSource userPublishing:storeURLForStoreId:]
-[AEAssetActivityItemProviderSource userPublishing:storeShortURLForStoreId:]
-[AEAssetActivityItemProviderSource readingDirection]
-[AEAssetActivityItemProviderSource storeUrl]
-[AEAssetActivityItemProviderSource storeShortUrl]
-[AEAssetActivityItemProviderSource storeUrlPreferShort]
-[AEAssetActivityItemProviderSource bookURL]
-[AEAssetActivityItemProviderSource epubID]
-[AEAssetActivityItemProviderSource assetCover]
-[AEAssetActivityItemProviderSource title]
-[AEAssetActivityItemProviderSource author]
-[AEAssetActivityItemProviderSource publisherLocation]
-[AEAssetActivityItemProviderSource publisherName]
-[AEAssetActivityItemProviderSource publisherYear]
-[AEAssetActivityItemProviderSource genre]
-[AEAssetActivityItemProviderSource contentProtected]
-[AEAssetActivityItemProviderSource isSeriesContainer]
-[AEAssetActivityItemProviderSource isPDF]
-[AEAssetActivityItemProviderSource checkoutBookString]
-[AEAssetActivityItemProviderSource checkOutBookWithShortCitationWithCharacterLimit:compressedFormat:]
-[AEAssetActivityItemProviderSource filePathByGeneratingWebArchive]
-[AEAssetActivityItemProviderSource activityViewController:subjectForActivityType:]
-[AEAssetActivityItemProviderSource setPropertySource:]
-[AEAssetActivityItemProviderSource setActivityType:]
-[AEAssetTextActivityItemProvider supportedActivityTypes]
-[AEAssetTextActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAssetTextActivityItemProvider activityViewController:itemForActivityType:]
-[AEAssetTwitterWeiboActivityItemProvider characterLimit]
-[AEAssetTwitterWeiboActivityItemProvider supportedActivityTypes]
-[AEAssetTwitterWeiboActivityItemProvider expandedItemProviders]
___64-[AEAssetTwitterWeiboActivityItemProvider expandedItemProviders]_block_invoke
___copy_helper_block_346
___destroy_helper_block_347
-[AEAssetFacebookActivityItemProvider characterLimit]
-[AEAssetFacebookActivityItemProvider supportedActivityTypes]
-[AEAssetFacebookActivityItemProvider expandedItemProviders]
___60-[AEAssetFacebookActivityItemProvider expandedItemProviders]_block_invoke
___copy_helper_block_359
___destroy_helper_block_360
___60-[AEAssetFacebookActivityItemProvider expandedItemProviders]_block_invoke362
___copy_helper_block_363
___destroy_helper_block_364
-[AEAssetMailActivityItemProvider supportedActivityTypes]
-[AEAssetMailActivityItemProvider expandedItemProviders]
-[AEAssetAttachmentActivityItemProvider supportedActivityTypes]
-[AEAssetAttachmentActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAssetAttachmentActivityItemProvider activityViewController:itemForActivityType:]
-[AEAssetAttachmentActivityItemProvider activityViewController:didShareItems:success:]
-[AEAssetHTMLActivityItemProvider supportedActivityTypes]
-[AEAssetHTMLActivityItemProvider activityViewController:itemForActivityType:]
-[AEAssetHTMLActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAssetHTMLActivityItemProvider(NSPasteboardWriting) writableTypesForPasteboard:]
-[AEAssetHTMLActivityItemProvider(NSPasteboardWriting) writingOptionsForType:pasteboard:]
-[AEAssetHTMLActivityItemProvider(NSPasteboardWriting) pasteboardPropertyListForType:]
-[IMActivityController setFallbackViewControllerClass:]
-[IMActivityController updateMenu:]
-[IMActivityController menuItems]
-[IMActivityController sharingServicePicker]
-[IMActivityController sharingServicePicker:sharingServicesForItems:proposedSharingServices:]
___93-[IMActivityController sharingServicePicker:sharingServicesForItems:proposedSharingServices:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMActivityController sharingServicePicker:delegateForSharingService:]
-[IMActivityController performShare:]
-[IMActivityController performShareWithService:]
-[IMActivityController sharingService:sourceWindowForShareItems:sharingContentScope:]
-[IMActivityController sharingService:willShareItems:]
-[IMActivityController sharingService:didFailToShareItems:error:]
-[IMActivityController sharingService:didShareItems:]
-[IMActivityController _sharingService:didShareItems:success:]
-[IMActivityController completionHandler]
-[IMActivityController fallbackViewControllerClass]
-[IMActivityController setActivityItems:]
-[IMActivityController applicationActivities]
-[IMActivityController setApplicationActivities:]
-[IMActivityController setExpandedActivityItems:]
-[IMActivityController setExcludedActivityTypes:]
-[IMActivityController isManagedBook]
-[IMActivityController setManagedBook:]
-[SFUFileInputStream initWithFileDescriptor:offset:length:]
-[SFUFileInputStream initWithPath:offset:length:]
-[SFUFileInputStream initWithPath:offset:]
-[SFUFileInputStream dealloc]
-[SFUFileInputStream offset]
-[SFUFileInputStream readToBuffer:size:]
-[SFUFileInputStream canSeek]
-[SFUFileInputStream seekToOffset:]
-[SFUFileInputStream disableSystemCaching]
-[SFUFileInputStream enableSystemCaching]
-[SFUFileInputStream close]
-[SFUFileInputStream closeLocalStream]
-[NSError(CoreDataExtras) logRecursively]
+[BKSeriesManager sharedManager]
___32+[BKSeriesManager sharedManager]_block_invoke
-[BKSeriesManager initWithDatabase:]
-[BKSeriesManager init]
-[BKSeriesManager updateSeriesAdamIds:completion:]
___50-[BKSeriesManager updateSeriesAdamIds:completion:]_block_invoke
___Block_byref_object_copy_
___Block_byref_object_dispose_
___50-[BKSeriesManager updateSeriesAdamIds:completion:]_block_invoke21
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_43
___destroy_helper_block_44
-[BKSeriesManager updateAndRecheckAdamID:]
___42-[BKSeriesManager updateAndRecheckAdamID:]_block_invoke
___copy_helper_block_48
___destroy_helper_block_49
-[BKSeriesManager updateSeriesWithAdamIds:]
-[BKSeriesManager _updateSeriesWithAdamIds:completion:]
___55-[BKSeriesManager _updateSeriesWithAdamIds:completion:]_block_invoke
___55-[BKSeriesManager _updateSeriesWithAdamIds:completion:]_block_invoke_2
___copy_helper_block_53
___destroy_helper_block_54
___copy_helper_block_58
___destroy_helper_block_59
-[BKSeriesManager seriesContainerIdsMatchingPredicate:]
-[BKSeriesManager seriesItemAdamIdsMatchingPredicate:]
-[BKSeriesManager allSeriesContainerIds]
-[BKSeriesManager allSeriesItemAdamIds]
-[BKSeriesManager allSeriesItemsForAdamIDs:]
-[BKSeriesManager allSeriesItemsInSeries:]
+[BKSeriesManager itemFetchProperties]
-[BKSeriesManager seriesContainerWithSeriesId:]
-[BKSeriesManager seriesItemWithAdamId:]
-[BKSeriesManager fetchBuyParametersForSeriesItemWithAdamId:completionHandler:]
___79-[BKSeriesManager fetchBuyParametersForSeriesItemWithAdamId:completionHandler:]_block_invoke
___copy_helper_block_161
___destroy_helper_block_162
-[BKSeriesManager database]
-[BKSeriesManager setDatabase:]
-[BKSeriesManager timeOut]
-[BKSeriesManager setTimeOut:]
-[BKSeriesManager isFetchingSeries]
-[BKSeriesManager setIsFetchingSeries:]
-[BKSeriesManager pendingAdamIds]
-[BKSeriesManager setPendingAdamIds:]
-[BKSeriesManager queue]
-[BKSeriesManager setQueue:]
-[BKSeriesManager .cxx_destruct]
-[SFUMemoryInputStream initWithData:]
-[SFUMemoryInputStream initWithData:offset:length:]
-[SFUMemoryInputStream dealloc]
-[SFUMemoryInputStream offset]
-[SFUMemoryInputStream readToBuffer:size:]
-[SFUMemoryInputStream canSeek]
-[SFUMemoryInputStream seekToOffset:]
-[SFUMemoryInputStream readToOwnBuffer:size:]
-[SFUMemoryInputStream seekWithinBufferToOffset:]
-[SFUMemoryInputStream disableSystemCaching]
-[SFUMemoryInputStream enableSystemCaching]
-[SFUMemoryInputStream close]
-[SFUMemoryInputStream closeLocalStream]
+[NSString(IMAdditions) durationFormatter]
-[NSString(IMAdditions) stringByConvertingControlCharactersToSpace]
-[NSString(IMAdditions) stringByConvertingNewlineCharacterSetToSpace]
-[NSString(IMAdditions) stringWithPercentEscape]
-[NSString(IMAdditions) stringByRemovingPercentEscapes]
-[NSString(IMAdditions) containsSubstring:]
-[NSString(IMAdditions) isWhitespace]
-[NSString(IMAdditions) isNotWhitespace]
+[NSString(IMAdditions) stringWithDuration:]
+[NSString(IMAdditions) durationWithHMSString:]
+[NSString(IMAdditions) stringWithBytesize:]
+[NSString(IMAdditions) queryStringFromDictionary:]
-[NSString(IMAdditions) dictionaryByDecomposingQueryStringWithURLDecode:]
-[NSString(IMAdditions) rangeOfSignificantSubstring]
___52-[NSString(IMAdditions) rangeOfSignificantSubstring]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSString(IMAdditions) stringByRemovingInsignificantPrefix]
___copy_helper_block_148
___destroy_helper_block_149
-[NSString(IMAdditions) stringByTruncatingToLength:options:truncationString:]
___77-[NSString(IMAdditions) stringByTruncatingToLength:options:truncationString:]_block_invoke
___copy_helper_block_151
___destroy_helper_block_152
-[NSString(IMAdditions) stringByEnclosingInQuotes]
-[NSString(IMAdditions) im_uppercaseStringWithLocale:]
-[NSString(IMAdditions) im_stringWithPathRelativeTo:]
-[NSString(IMAdditions) im_stringWithPathRelativeTo:allowBacktracking:]
-[NSString(IMAdditions) stringByRemovingEnclosingQuotations]
-[NSString(IMAdditions) unsignedLongLongValue]
-[NSString(IMAdditions) imIsDefaultWritingMode]
-[NSString(IMAdditions) imIsHorizontalWritingMode]
-[NSString(IMAdditions) imIsVerticalWritingMode]
+[AEAnnotationTheme(ThemeDescriptions) themeDescriptions]
___57+[AEAnnotationTheme(ThemeDescriptions) themeDescriptions]_block_invoke
+[AEAnnotationTheme(ThemeDescriptions) themeItemForAnnotationStyle:propertyName:]
+[AEAnnotationTheme(ThemeDescriptions) colorForAnnotationStyle:propertyName:inverted:]
-[AEAnnotationThemeGreen noteFillColor]
___39-[AEAnnotationThemeGreen noteFillColor]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___39-[AEAnnotationThemeGreen noteFillColor]_block_invoke96
___41-[AEAnnotationThemeGreen noteBorderColor]_block_invoke
___copy_helper_block_100
___destroy_helper_block_101
___41-[AEAnnotationThemeGreen noteBorderColor]_block_invoke105
___copy_helper_block_106
___destroy_helper_block_107
___39-[AEAnnotationThemeGreen noteTextColor]_block_invoke
___copy_helper_block_109
___destroy_helper_block_110
___39-[AEAnnotationThemeGreen noteTextColor]_block_invoke114
___copy_helper_block_115
___destroy_helper_block_116
___40-[AEAnnotationThemeGreen highlightColor]_block_invoke
___copy_helper_block_118
___destroy_helper_block_119
___40-[AEAnnotationThemeGreen highlightColor]_block_invoke123
___copy_helper_block_124
___destroy_helper_block_125
-[AEAnnotationThemeGreen noteMarkerFillColor]
___45-[AEAnnotationThemeGreen noteMarkerFillColor]_block_invoke
___copy_helper_block_127
___destroy_helper_block_128
___45-[AEAnnotationThemeGreen noteMarkerFillColor]_block_invoke132
___copy_helper_block_133
___destroy_helper_block_134
___47-[AEAnnotationThemeGreen noteMarkerBorderColor]_block_invoke
___copy_helper_block_136
___destroy_helper_block_137
___47-[AEAnnotationThemeGreen noteMarkerBorderColor]_block_invoke141
___copy_helper_block_142
___destroy_helper_block_143
-[AEAnnotationThemeGreen notesSidebarBarColor]
___46-[AEAnnotationThemeGreen notesSidebarBarColor]_block_invoke
___copy_helper_block_145
___destroy_helper_block_146
___46-[AEAnnotationThemeGreen notesSidebarBarColor]_block_invoke150
___copy_helper_block_151
___destroy_helper_block_152
-[AEAnnotationThemeGreen isUnderline]
___37-[AEAnnotationThemeGreen isUnderline]_block_invoke
___copy_helper_block_156
___destroy_helper_block_157
-[AEAnnotationThemeBlue noteFillColor]
___38-[AEAnnotationThemeBlue noteFillColor]_block_invoke
___copy_helper_block_170
___destroy_helper_block_171
___38-[AEAnnotationThemeBlue noteFillColor]_block_invoke175
___copy_helper_block_176
___destroy_helper_block_177
___40-[AEAnnotationThemeBlue noteBorderColor]_block_invoke
___copy_helper_block_179
___destroy_helper_block_180
___40-[AEAnnotationThemeBlue noteBorderColor]_block_invoke184
___copy_helper_block_185
___destroy_helper_block_186
___38-[AEAnnotationThemeBlue noteTextColor]_block_invoke
___copy_helper_block_188
___destroy_helper_block_189
___38-[AEAnnotationThemeBlue noteTextColor]_block_invoke193
___copy_helper_block_194
___destroy_helper_block_195
___39-[AEAnnotationThemeBlue highlightColor]_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
___39-[AEAnnotationThemeBlue highlightColor]_block_invoke202
___copy_helper_block_203
___destroy_helper_block_204
-[AEAnnotationThemeBlue noteMarkerFillColor]
___44-[AEAnnotationThemeBlue noteMarkerFillColor]_block_invoke
___copy_helper_block_206
___destroy_helper_block_207
___44-[AEAnnotationThemeBlue noteMarkerFillColor]_block_invoke211
___copy_helper_block_212
___destroy_helper_block_213
-[AEAnnotationThemeBlue noteMarkerBorderColor]
___46-[AEAnnotationThemeBlue noteMarkerBorderColor]_block_invoke
___copy_helper_block_215
___destroy_helper_block_216
___46-[AEAnnotationThemeBlue noteMarkerBorderColor]_block_invoke220
___copy_helper_block_221
___destroy_helper_block_222
-[AEAnnotationThemeBlue notesSidebarBarColor]
___45-[AEAnnotationThemeBlue notesSidebarBarColor]_block_invoke
___copy_helper_block_224
___destroy_helper_block_225
___45-[AEAnnotationThemeBlue notesSidebarBarColor]_block_invoke229
___copy_helper_block_230
___destroy_helper_block_231
-[AEAnnotationThemeBlue isUnderline]
___36-[AEAnnotationThemeBlue isUnderline]_block_invoke
___copy_helper_block_233
___destroy_helper_block_234
-[AEAnnotationThemeYellow noteFillColor]
___40-[AEAnnotationThemeYellow noteFillColor]_block_invoke
___copy_helper_block_237
___destroy_helper_block_238
___40-[AEAnnotationThemeYellow noteFillColor]_block_invoke242
___copy_helper_block_243
___destroy_helper_block_244
___42-[AEAnnotationThemeYellow noteBorderColor]_block_invoke
___copy_helper_block_246
___destroy_helper_block_247
___42-[AEAnnotationThemeYellow noteBorderColor]_block_invoke251
___copy_helper_block_252
___destroy_helper_block_253
___40-[AEAnnotationThemeYellow noteTextColor]_block_invoke
___copy_helper_block_255
___destroy_helper_block_256
___40-[AEAnnotationThemeYellow noteTextColor]_block_invoke260
___copy_helper_block_261
___destroy_helper_block_262
___41-[AEAnnotationThemeYellow highlightColor]_block_invoke
___copy_helper_block_264
___destroy_helper_block_265
___41-[AEAnnotationThemeYellow highlightColor]_block_invoke269
___copy_helper_block_270
___destroy_helper_block_271
-[AEAnnotationThemeYellow noteMarkerFillColor]
___46-[AEAnnotationThemeYellow noteMarkerFillColor]_block_invoke
___copy_helper_block_273
___destroy_helper_block_274
___46-[AEAnnotationThemeYellow noteMarkerFillColor]_block_invoke278
___copy_helper_block_279
___destroy_helper_block_280
-[AEAnnotationThemeYellow noteMarkerBorderColor]
___48-[AEAnnotationThemeYellow noteMarkerBorderColor]_block_invoke
___copy_helper_block_282
___destroy_helper_block_283
___48-[AEAnnotationThemeYellow noteMarkerBorderColor]_block_invoke287
___copy_helper_block_288
___destroy_helper_block_289
-[AEAnnotationThemeYellow notesSidebarBarColor]
___47-[AEAnnotationThemeYellow notesSidebarBarColor]_block_invoke
___copy_helper_block_291
___destroy_helper_block_292
___47-[AEAnnotationThemeYellow notesSidebarBarColor]_block_invoke296
___copy_helper_block_297
___destroy_helper_block_298
-[AEAnnotationThemeYellow isUnderline]
___38-[AEAnnotationThemeYellow isUnderline]_block_invoke
___copy_helper_block_300
___destroy_helper_block_301
-[AEAnnotationThemePurple noteFillColor]
___40-[AEAnnotationThemePurple noteFillColor]_block_invoke
___copy_helper_block_304
___destroy_helper_block_305
___40-[AEAnnotationThemePurple noteFillColor]_block_invoke309
___copy_helper_block_310
___destroy_helper_block_311
-[AEAnnotationThemePurple noteBorderColor]
___42-[AEAnnotationThemePurple noteBorderColor]_block_invoke
___copy_helper_block_313
___destroy_helper_block_314
___42-[AEAnnotationThemePurple noteBorderColor]_block_invoke318
___copy_helper_block_319
___destroy_helper_block_320
-[AEAnnotationThemePurple noteTextColor]
___40-[AEAnnotationThemePurple noteTextColor]_block_invoke
___copy_helper_block_322
___destroy_helper_block_323
___40-[AEAnnotationThemePurple noteTextColor]_block_invoke327
___copy_helper_block_328
___destroy_helper_block_329
___41-[AEAnnotationThemePurple highlightColor]_block_invoke
___copy_helper_block_331
___destroy_helper_block_332
___41-[AEAnnotationThemePurple highlightColor]_block_invoke336
___copy_helper_block_337
___destroy_helper_block_338
-[AEAnnotationThemePurple noteMarkerFillColor]
___46-[AEAnnotationThemePurple noteMarkerFillColor]_block_invoke
___copy_helper_block_340
___destroy_helper_block_341
___46-[AEAnnotationThemePurple noteMarkerFillColor]_block_invoke345
___copy_helper_block_346
___destroy_helper_block_347
-[AEAnnotationThemePurple noteMarkerBorderColor]
___48-[AEAnnotationThemePurple noteMarkerBorderColor]_block_invoke
___copy_helper_block_349
___destroy_helper_block_350
___48-[AEAnnotationThemePurple noteMarkerBorderColor]_block_invoke354
___copy_helper_block_355
___destroy_helper_block_356
-[AEAnnotationThemePurple notesSidebarBarColor]
___47-[AEAnnotationThemePurple notesSidebarBarColor]_block_invoke
___copy_helper_block_358
___destroy_helper_block_359
___47-[AEAnnotationThemePurple notesSidebarBarColor]_block_invoke363
___copy_helper_block_364
___destroy_helper_block_365
-[AEAnnotationThemePurple isUnderline]
___38-[AEAnnotationThemePurple isUnderline]_block_invoke
___copy_helper_block_367
___destroy_helper_block_368
-[AEAnnotationThemePink noteFillColor]
___38-[AEAnnotationThemePink noteFillColor]_block_invoke
___copy_helper_block_371
___destroy_helper_block_372
___38-[AEAnnotationThemePink noteFillColor]_block_invoke376
___copy_helper_block_377
___destroy_helper_block_378
-[AEAnnotationThemePink noteBorderColor]
___40-[AEAnnotationThemePink noteBorderColor]_block_invoke
___copy_helper_block_380
___destroy_helper_block_381
___40-[AEAnnotationThemePink noteBorderColor]_block_invoke385
___copy_helper_block_386
___destroy_helper_block_387
-[AEAnnotationThemePink noteTextColor]
___38-[AEAnnotationThemePink noteTextColor]_block_invoke
___copy_helper_block_389
___destroy_helper_block_390
___38-[AEAnnotationThemePink noteTextColor]_block_invoke394
___copy_helper_block_395
___destroy_helper_block_396
-[AEAnnotationThemePink highlightColor]
___39-[AEAnnotationThemePink highlightColor]_block_invoke
___copy_helper_block_398
___destroy_helper_block_399
___39-[AEAnnotationThemePink highlightColor]_block_invoke403
___copy_helper_block_404
___destroy_helper_block_405
-[AEAnnotationThemePink noteMarkerFillColor]
___44-[AEAnnotationThemePink noteMarkerFillColor]_block_invoke
___copy_helper_block_407
___destroy_helper_block_408
___44-[AEAnnotationThemePink noteMarkerFillColor]_block_invoke412
___copy_helper_block_413
___destroy_helper_block_414
-[AEAnnotationThemePink noteMarkerBorderColor]
___46-[AEAnnotationThemePink noteMarkerBorderColor]_block_invoke
___copy_helper_block_416
___destroy_helper_block_417
___46-[AEAnnotationThemePink noteMarkerBorderColor]_block_invoke421
___copy_helper_block_422
___destroy_helper_block_423
-[AEAnnotationThemePink notesSidebarBarColor]
___45-[AEAnnotationThemePink notesSidebarBarColor]_block_invoke
___copy_helper_block_425
___destroy_helper_block_426
___45-[AEAnnotationThemePink notesSidebarBarColor]_block_invoke430
___copy_helper_block_431
___destroy_helper_block_432
-[AEAnnotationThemePink isUnderline]
___36-[AEAnnotationThemePink isUnderline]_block_invoke
___copy_helper_block_434
___destroy_helper_block_435
-[AEAnnotationThemePink annotationStyle]
-[AEAnnotationThemeUnderline noteFillColor]
___43-[AEAnnotationThemeUnderline noteFillColor]_block_invoke
___copy_helper_block_438
___destroy_helper_block_439
___43-[AEAnnotationThemeUnderline noteFillColor]_block_invoke443
___copy_helper_block_444
___destroy_helper_block_445
___45-[AEAnnotationThemeUnderline noteBorderColor]_block_invoke
___copy_helper_block_447
___destroy_helper_block_448
___45-[AEAnnotationThemeUnderline noteBorderColor]_block_invoke452
___copy_helper_block_453
___destroy_helper_block_454
-[AEAnnotationThemeUnderline noteTextColor]
___43-[AEAnnotationThemeUnderline noteTextColor]_block_invoke
___copy_helper_block_456
___destroy_helper_block_457
___43-[AEAnnotationThemeUnderline noteTextColor]_block_invoke461
___copy_helper_block_462
___destroy_helper_block_463
-[AEAnnotationThemeUnderline highlightColor]
___44-[AEAnnotationThemeUnderline highlightColor]_block_invoke
___copy_helper_block_465
___destroy_helper_block_466
___44-[AEAnnotationThemeUnderline highlightColor]_block_invoke470
___copy_helper_block_471
___destroy_helper_block_472
-[AEAnnotationThemeUnderline noteMarkerFillColor]
___49-[AEAnnotationThemeUnderline noteMarkerFillColor]_block_invoke
___copy_helper_block_474
___destroy_helper_block_475
___49-[AEAnnotationThemeUnderline noteMarkerFillColor]_block_invoke479
___copy_helper_block_480
___destroy_helper_block_481
-[AEAnnotationThemeUnderline noteMarkerBorderColor]
___51-[AEAnnotationThemeUnderline noteMarkerBorderColor]_block_invoke
___copy_helper_block_483
___destroy_helper_block_484
___51-[AEAnnotationThemeUnderline noteMarkerBorderColor]_block_invoke488
___copy_helper_block_489
___destroy_helper_block_490
-[AEAnnotationThemeUnderline notesSidebarBarColor]
___50-[AEAnnotationThemeUnderline notesSidebarBarColor]_block_invoke
___copy_helper_block_492
___destroy_helper_block_493
___50-[AEAnnotationThemeUnderline notesSidebarBarColor]_block_invoke497
___copy_helper_block_498
___destroy_helper_block_499
___41-[AEAnnotationThemeUnderline isUnderline]_block_invoke
___copy_helper_block_501
___destroy_helper_block_502
-[AEAnnotationTheme noteFillColor]
-[AEAnnotationTheme noteBorderColor]
-[AEAnnotationTheme noteTextColor]
-[AEAnnotationTheme highlightColor]
-[AEAnnotationTheme noteMarkerFillColor]
-[AEAnnotationTheme noteMarkerBorderColor]
-[AEAnnotationTheme notesSidebarBarColor]
___49-[AEAnnotationTheme noteMarkerStrikethroughColor]_block_invoke
-[AEAnnotationTheme notesSidebarTextColor]
___42-[AEAnnotationTheme notesSidebarTextColor]_block_invoke
+[AEAnnotationTheme pinkTheme:]
___31+[AEAnnotationTheme pinkTheme:]_block_invoke
___31+[AEAnnotationTheme pinkTheme:]_block_invoke_2
+[AEAnnotationTheme theme:]
+[AEAnnotationTheme highlightTextColor:]
___40+[AEAnnotationTheme highlightTextColor:]_block_invoke
___40+[AEAnnotationTheme highlightTextColor:]_block_invoke_2
-[AEAnnotationTheme noteShadowRadius]
___37-[AEAnnotationTheme noteShadowRadius]_block_invoke
-[AEAnnotationTheme noteShadowOpacity]
___38-[AEAnnotationTheme noteShadowOpacity]_block_invoke
-[AEAnnotationTheme noteShadowColor]
___36-[AEAnnotationTheme noteShadowColor]_block_invoke
-[AEAnnotationTheme noteShadowOffset]
___37-[AEAnnotationTheme noteShadowOffset]_block_invoke
-[AEAnnotationTheme noteTextFont]
___33-[AEAnnotationTheme noteTextFont]_block_invoke
-[AEAnnotationTheme noteTextFontInTable]
___40-[AEAnnotationTheme noteTextFontInTable]_block_invoke
-[AEAnnotationTheme annotationStyle]
-[BKSeriesFolderLayer init]
-[BKSeriesFolderLayer initWithType:]
-[BKSeriesFolderLayer setFrame:]
-[BKSeriesFolderLayer _populateLayoutInfo:]
-[BKSeriesFolderLayer layoutSublayers]
-[BKSeriesFolderLayer _addRects:toMaskLayer:maskIn:]
-[BKSeriesFolderLayer _setupMaskLayersAndOpacity]
-[BKSeriesFolderLayer folderRect]
-[BKSeriesFolderLayer _rectForImageAtPosition:frontRect:]
-[BKSeriesFolderLayer layoutRects]
-[BKSeriesFolderLayer setImages:]
-[BKSeriesFolderLayer layoutRectsWithCount:]
-[BKSeriesFolderLayer backgroundLayer]
-[BKSeriesFolderLayer setBackgroundLayer:]
-[BKSeriesFolderLayer type]
-[BKSeriesFolderLayer numCoverImages]
-[BKSeriesFolderLayer selectionRect]
-[BKSeriesFolderLayer selectionMaskPath]
-[BKSeriesFolderLayer frontCoverRect]
-[BKSeriesFolderLayer shouldFadeInMasks]
-[BKSeriesFolderLayer setShouldFadeInMasks:]
-[BKSeriesFolderLayer container]
-[BKSeriesFolderLayer setContainer:]
-[BKSeriesFolderLayer .cxx_destruct]
_F
+[AEAnnotationSerializationManager managedBooksAllowedToSync]
+[AEAnnotationSerializationManager annotationSerializationManagerWithAssetID:assetURL:bookVersionString:pathToAssetContextDirectory:isManagedBook:]
+[AEAnnotationSerializationManager annotationSerializationManagerWithBookMetadataProvider:]
-[AEAnnotationSerializationManager initWithBookMetadataProvider:]
-[AEAnnotationSerializationManager annotationProviderForOfflineDBWithAssetID:]
-[AEAnnotationSerializationManager urlForOfflineDBWithAssetID:]
-[AEAnnotationSerializationManager isAssetOfflineWithAssetID:]
-[AEAnnotationSerializationManager removeOfflineDBFilesWithAssetID:exceptBookVersionString:]
-[AEAnnotationSerializationManager takeBookOfflineIfManagedWithAnnotationProvider:assetID:]
-[AEAnnotationSerializationManager p_ensureDirectoryPathExists:]
-[AEAnnotationSerializationManager protected_takeAssetOfflineWithProvider:assetID:copyData:]
-[AEAnnotationSerializationManager p_filenameForOfflineDBWithAssetID:]
-[AEAnnotationSerializationManager bookMetadataProvider]
-[AEAnnotationSerializationManager setBookMetadataProvider:]
-[AEAnnotationSerializationManager .cxx_destruct]
+[AESingleBookMetadataProvider singleBookMetadataProviderWithAssetID:assetURL:bookVersionString:pathToAssetContextDirectory:isManagedBook:]
-[AESingleBookMetadataProvider initWithAssetID:assetURL:bookVersionString:pathToAssetContextDirectory:isManagedBook:]
-[AESingleBookMetadataProvider description]
-[AESingleBookMetadataProvider assetURLForAssetID:]
-[AESingleBookMetadataProvider bookVersionStringForAssetID:]
-[AESingleBookMetadataProvider pathToContextDirectoryForAssetID:]
-[AESingleBookMetadataProvider isManagedWithAssetID:]
-[AESingleBookMetadataProvider assetID]
-[AESingleBookMetadataProvider setAssetID:]
-[AESingleBookMetadataProvider assetURL]
-[AESingleBookMetadataProvider setAssetURL:]
-[AESingleBookMetadataProvider bookVersionString]
-[AESingleBookMetadataProvider setBookVersionString:]
-[AESingleBookMetadataProvider pathToAssetContextDirectory]
-[AESingleBookMetadataProvider setPathToAssetContextDirectory:]
-[AESingleBookMetadataProvider isManagedBook]
-[AESingleBookMetadataProvider setManagedBook:]
-[AESingleBookMetadataProvider .cxx_destruct]
-[SFUZipArchiveFileDataRepresentation initWithPath:]
-[SFUZipArchiveFileDataRepresentation dealloc]
-[SFUZipArchiveFileDataRepresentation isReadable]
-[SFUZipArchiveFileDataRepresentation dataLength]
-[SFUZipArchiveFileDataRepresentation isEncrypted]
-[SFUZipArchiveFileDataRepresentation inputStream]
-[SFUZipArchiveFileDataRepresentation hasSameLocationAs:]
-[SFUZipArchiveFileDataRepresentation path]
-[SFUZipArchiveFileDataRepresentation inputStreamWithOffset:length:]
-[SFUZipArchiveFileDataRepresentation bufferedInputStreamWithOffset:length:]
+[NSData(IMAdditions) imDataFromHexString:]
-[NSData(IMAdditions) hexString]
-[NSData(IMAdditions) sha1]
-[NSData(IMAdditions) md5]
+[IMDevice currentDevice]
___25+[IMDevice currentDevice]_block_invoke
-[IMDevice numberOfCPUCores]
___28-[IMDevice numberOfCPUCores]_block_invoke
-[IMDevice currentMemoryStatistics:rsize:available:total:]
-[IMDevice trackPadScrollDirectionIsNatural]
___44-[IMDevice trackPadScrollDirectionIsNatural]_block_invoke
-[IMDevice hasNetwork]
+[SFUCryptoOutputStream encodedLengthForDataLength:key:]
-[SFUCryptoOutputStream initForEncryptionWithOutputStream:key:]
-[SFUCryptoOutputStream initForEncryptionWithOutputStream:key:computeCrc32:]
-[SFUCryptoOutputStream dealloc]
-[SFUCryptoOutputStream writeBuffer:size:]
-[SFUCryptoOutputStream canSeek]
-[SFUCryptoOutputStream seekToOffset:whence:]
-[SFUCryptoOutputStream offset]
-[SFUCryptoOutputStream canCreateInputStream]
-[SFUCryptoOutputStream inputStream]
-[SFUCryptoOutputStream crc32]
-[SFUCryptoOutputStream close]
-[SFUCryptoOutputStream closeLocalStream]
-[IMLibraryPlist calculateChecksum]
_compareDictionaryPaths
-[IMLibraryPlist isPathInDirectory:]
-[IMLibraryPlist rewriteSidecarWithDeletes:]
+[IMLibraryPlist authorFromPlistEntry:]
+[IMLibraryPlist sortAuthorFromPlistEntry:]
+[IMLibraryPlist titleFromPlistEntry:]
+[IMLibraryPlist sortTitleFromPlistEntry:]
+[IMLibraryPlist genreFromPlistEntry:]
+[IMLibraryPlist isExplicitContentFromPlistEntry:]
+[IMLibraryPlist temporaryItemIdentifierFromPlistEntry:]
+[IMLibraryPlist persistentIDFromPlistEntry:]
+[IMLibraryPlist bookEpubIdFromPlistEntry:]
+[IMLibraryPlist albumFromPlistEntry:]
+[IMLibraryPlist isItunesUFromPlistEntry:]
+[IMLibraryPlist feedURLFromPlistEntry:]
+[IMLibraryPlist mimeTypeFromPlistEntry:]
+[IMLibraryPlist extensionFromPlistEntry:]
+[IMLibraryPlist publicationVersionFromPlistEntry:]
+[IMLibraryPlist humanReadablePublicationVersionFromPlistEntry:]
+[IMLibraryPlist pageProgressionFromPlistEntry:]
+[IMLibraryPlist assetTypeFromPlistEntry:]
+[IMLibraryPlist languageFromPlistEntry:]
___41+[IMLibraryPlist languageFromPlistEntry:]_block_invoke
+[IMLibraryPlist coverWritingModeFromPlistEntry:]
+[IMLibraryPlist scrollDirectionFromPlistEntry:]
+[IMLibraryPlist languagesFromPlistEntry:]
+[IMLibraryPlist primaryLanguageFromPlistEntry:]
+[IMLibraryPlist keyNameForAuthor]
+[IMLibraryPlist keyNameForTitle]
+[IMLibraryPlist keyNameForGenre]
+[IMLibraryPlist keyNameForExplicitContent]
+[IMLibraryPlist keyNameForPath]
+[IMLibraryPlist keyNameForStoreId]
+[IMLibraryPlist keyNameForUniqueId]
+[IMLibraryPlist keyNameForAssetType]
+[IMLibraryPlist keyNameForSubject]
+[IMLibraryPlist keyNameForSortAuthor]
+[IMLibraryPlist keyNameForSortTitle]
+[IMLibraryPlist keyNameForPublicationVersion]
+[IMLibraryPlist keyNameForHumanReadablePublicationVersion]
+[IMLibraryPlist keyNameForPageProgression]
+[IMLibraryPlist keyNameForLanguages]
+[IMLibraryPlist keyNameForPrimaryLanguage]
+[IMLibraryPlist keyNameForScrollDirection]
+[IMLibraryPlist keyNameForCoverWritingMode]
+[IMLibraryPlist uniqueIdFromPlistEntry:]
+[IMLibraryPlist folderNameFromPlistEntry:]
+[IMLibraryPlist isSampleFromPlistEntry:]
+[IMLibraryPlist isManagedBookFromURL:]
+[IMLibraryPlist isThinnedAssetFromPlistEntry:]
+[IMLibraryPlist storeIdFromPlistEntry:]
-[IMLibraryPlist bumpModificationDate]
-[IMLibraryPlist addDeletedPaths:]
-[IMLibraryPlist removeDeletedPaths:]
___37-[IMLibraryPlist removeDeletedPaths:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
_extractGenreNames_block_invoke
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_genres]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_genre]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_adamId]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_sortTitle]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_sortAuthor]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_title]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_author]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_isExplicit]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_seriesInfo]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_seriesId]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_seriesTitle]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_position]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_displayLabel]
-[AEUserPublishingProductProfile(BKSeriesDataItem) series_formattedPrice]
-[NSDictionary(BKSeriesManagerAdditions) series_genre]
-[NSDictionary(BKSeriesManagerAdditions) series_genres]
-[NSDictionary(BKSeriesManagerAdditions) series_adamId]
-[NSDictionary(BKSeriesManagerAdditions) series_sortTitle]
-[NSDictionary(BKSeriesManagerAdditions) series_sortAuthor]
-[NSDictionary(BKSeriesManagerAdditions) series_title]
-[NSDictionary(BKSeriesManagerAdditions) series_author]
-[NSDictionary(BKSeriesManagerAdditions) series_isExplicit]
-[NSDictionary(BKSeriesManagerAdditions) series_formattedPrice]
-[SFUFileOutputStream initWithPath:]
-[SFUFileOutputStream dealloc]
-[SFUFileOutputStream path]
-[SFUFileOutputStream writeBuffer:size:]
-[SFUFileOutputStream offset]
-[SFUFileOutputStream canSeek]
-[SFUFileOutputStream seekToOffset:whence:]
-[SFUFileOutputStream canCreateInputStream]
-[SFUFileOutputStream inputStream]
-[SFUFileOutputStream close]
-[SFUFileOutputStream closeLocalStream]
+[AEAnnotationBlockFilter filterWithBlock:]
+[AEAnnotationBlockFilter filterWithConcurrentBlock:]
___copy_helper_block_
___destroy_helper_block_
+[AEAnnotationStringFilter filterWithString:]
+[AEAnnotationStringFilter filterWithString:fields:options:]
-[AEAnnotationStringFilter description]
+[AEUserPublishingLookUpRequest isEnabled]
+[AEUserPublishingLookUpRequest resultsDictionaryFromLookUpResponse:]
+[AEUserPublishingLookUpRequest keyProfileFromAEKeyProfile:]
-[AEUserPublishingLookUpRequest initWithAdamIDs:keyProfile:]
+[AEUserPublishingLookUpRequest bookURLForStoreId:]
+[AEUserPublishingLookUpRequest bookURLForSeriesID:]
-[AEUserPublishingLookUpRequest startWithLookupBlock:]
-[AEUserPublishingLookUpRequest .cxx_destruct]
+[IMLanguageUtilities shouldDisableFontFallbacksForLanguage:]
+[IMLanguageUtilities suffixForLanguage:]
+[IMLanguageUtilities languageIsTraditionalChinese:]
+[IMLanguageUtilities languageIsSimplifiedChinese:]
+[IMLanguageUtilities languageIsJapanese:]
+[IMLanguageUtilities languageIsKorean:]
+[IMLanguageUtilities languageIsArabic:]
+[IMLanguageUtilities languageIsHebrew:]
+[IMLanguageUtilities languageIsDevanagari:]
+[IMLanguageUtilities languageIsGurmukhi:]
+[IMLanguageUtilities languageIsGujarati:]
+[IMLanguageUtilities languageIsTamil:]
+[IMLanguageUtilities languageIsTelugu:]
+[IMLanguageUtilities languageIsMalayalam:]
+[IMLanguageUtilities languageIsSinhala:]
+[IMLanguageUtilities languageIsOriya:]
+[IMLanguageUtilities languageIsKannada:]
+[IMLanguageUtilities languageIsBengali:]
+[IMLanguageUtilities languageIsThai:]
+[IMLanguageUtilities languageIsTibetan:]
+[IMLanguageUtilities languageIsLao:]
+[IMLanguageUtilities languageIsKhmer:]
+[IMLanguageUtilities languageIsInuktitut:]
+[IMLanguageUtilities languageIsCherokee:]
+[IMLanguageUtilities languageIsAmharic:]
+[IMLanguageUtilities languageIsArmenian:]
+[BKSeriesItem seriesItem]
+[BKSeriesItem insertSeriesItemWithAdamId:seriesAdamId:intoManagedObjectContext:]
+[BKSeriesItem insertSeriesContainerWithSeriesAdamId:intoManagedObjectContext:]
+[BKSeriesItem fetchRequest]
+[BKSeriesItem predicateForItemWithAdamId:]
+[BKSeriesItem predicateForAllSeriesContainerItems]
+[BKSeriesItem predicateForContainerWithSeriesId:]
+[BKSeriesItem predicateForAllSeriesItems]
+[BKSeriesItem predicateForAllItemsAndContainersInSeries:]
+[BKSeriesItem predicateForAllItemsAndContainerWithAdamIdInList:]
-[NSFileManager(SFUtilityAdditions) directoryUsage:]
-[NSFileManager(SFUtilityAdditions) pathUsage:]
-[NSFileManager(SFUtilityAdditions) applyFileAttributesFromDocumentAtURL:toDocumentAtURL:error:]
-[NSString(NSURLAdditionsAdditions) containsPercentEscapes]
-[NSString(NSURLAdditionsAdditions) stringByPercentEscaping]
+[NSURL(SFUtilityAdditions) properlyEscapedString:]
+[NSURL(SFUtilityAdditions) improperlyEscapedString:]
+[NSURL(SFUtilityAdditions) relativeURLWithEscapes:]
+[NSURL(SFUtilityAdditions) filePathURLWithEscapes:]
-[NSURL(SFUtilityAdditions) isRelative]
+[IMAssertionHandler handleFailureInFunction:file:lineNumber:description:]
+[IMAssertionHandler handleFailureWithLocation:file:lineNumber:description:arguments:]
+[IMAssertionHandler performBlockIgnoringAssertions:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___53+[IMAssertionHandler performBlockIgnoringAssertions:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMZipArchiveUtilities zipEpubAssetAt:toURL:error:]
-[IMZipArchiveUtilities _writeFileAtURL:toOutputStream:withEntry:compressed:]
-[IMZipArchiveUtilities delegate]
-[IMZipArchiveUtilities setDelegate:]
___clang_call_terminate
-[NSObject(IMAdditions) im_propertiesDescription]
___49-[NSObject(IMAdditions) im_propertiesDescription]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSObject(IMAdditions) im_completeDescription]
+[AEUserPublishing p_keyForPrefix:storeId:]
___copy_helper_block_
___destroy_helper_block_
-[AEUserPublishing bookInfoHTMLForStoreId:dataSource:]
-[AEUserPublishing storeURLForStoreId:dataSource:]
-[AEUserPublishing storeShortURLForStoreId:dataSource:]
-[AEUserPublishing cheapStoreURLForSeriesID:]
-[AEUserPublishing productProfilesForStoreIDs:completion:]
___58-[AEUserPublishing productProfilesForStoreIDs:completion:]_block_invoke
___copy_helper_block_69
___destroy_helper_block_70
-[AEUserPublishing p_downloadedEmailBodyForStoreId:dataSource:]
-[AEUserPublishing p_downloadEmailContentForStoreId:]
-[AEUserPublishing p_generatedEmailBodyForStoreId:dataSource:]
-[AEUserPublishing p_downloadedStoreUrlForStoreId:keyProfile:path:dataSource:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___78-[AEUserPublishing p_downloadedStoreUrlForStoreId:keyProfile:path:dataSource:]_block_invoke
___copy_helper_block_185
___destroy_helper_block_186
-[AEUserPublishing p_isDownloadEnabledForStoreId:dataSource:]
-[AEUserPublishing p_isLocalGenerationEnabledForStoreId:dataSource:]
-[AEUserPublishing p_assetAuthorForStoreId:dataSource:]
-[AEUserPublishing p_assetTitleForStoreId:dataSource:]
-[AEUserPublishing p_assetCategoryForStoreId:dataSource:]
-[AEUserPublishing p_assetCoverImageForStoreId:dataSource:]
-[AEUserPublishing p_storeURLForStoreId:dataSource:]
-[AEUserPublishing p_storeShortURLForStoreId:dataSource:]
-[AEUserPublishing timeoutInterval]
-[AEUserPublishing setTimeoutInterval:]
-[AEUserPublishing cache]
-[AEUserPublishing setCache:]
-[AEUserPublishing .cxx_destruct]
-[NSArray(IMAdditions) imReversedArray]
-[NSArray(IMAdditions) containsStringCaseInsensitive:]
-[NSArray(IMAdditions) arrayOfObjectsContainingMatchingKey:matchingStrings:]
__compareDictionaryValues
-[NSArray(IMAdditions) arrayRemovingObjectsByKey:matchingStrings:]
-[NSArray(IMAdditions) arrayRemovingMatchingStrings:]
___copy_helper_block_
___destroy_helper_block_
-[IMImageCacheObject initWithImageRefs:imageSize:]
-[IMImageCacheObject imageRefs]
-[IMImageCacheObject setImageRefs:]
-[IMImageCacheObject imageSize]
-[IMImageCacheObject setImageSize:]
-[IMImageCacheObject .cxx_destruct]
___copy_helper_block_
___destroy_helper_block_
-[IMImageCache initWithIdentifier:memorySize:]
-[IMImageCache dealloc]
___copy_helper_block_72
___destroy_helper_block_73
-[IMImageCache flushMemoryCache]
-[IMImageCache flushPersistentCache]
-[IMImageCache flushAllCaches]
-[IMImageCache removeImageForKey:]
___46-[IMImageCache removeImageForKey:synchronous:]_block_invoke
___copy_helper_block_95
___destroy_helper_block_96
-[IMImageCache imageForKey:size:resizeOptions:]
-[IMImageCache imageForKey:size:resizeOptions:forceDecode:]
___copy_helper_block_124
___destroy_helper_block_125
-[IMImageCache imageForKey:size:completionBlock:queue:]
-[IMImageCache imageForKey:size:completionBlock:queue:options:]
___63-[IMImageCache imageForKey:size:completionBlock:queue:options:]_block_invoke
___copy_helper_block_129
___destroy_helper_block_130
___63-[IMImageCache imageForKey:size:completionBlock:queue:options:]_block_invoke132
___63-[IMImageCache imageForKey:size:completionBlock:queue:options:]_block_invoke_2
___copy_helper_block_135
___destroy_helper_block_136
___copy_helper_block_138
___destroy_helper_block_139
-[IMImageCache addImageFromURL:completionBlock:queue:]
-[IMImageCache addImageFromURL:size:completionBlock:queue:]
-[IMImageCache addImageFromURL:key:size:completionBlock:queue:]
___63-[IMImageCache addImageFromURL:key:size:completionBlock:queue:]_block_invoke
___63-[IMImageCache addImageFromURL:key:size:completionBlock:queue:]_block_invoke_2
___copy_helper_block_159
___destroy_helper_block_160
___copy_helper_block_162
___destroy_helper_block_163
-[IMImageCache imageDataSizeForKey:]
-[IMImageCache imageWithString:size:save:]
-[IMImageCache compareImage:withImage:]
-[IMImageCache hasImageInMemoryForKey:withSize:]
-[IMImageCache hasImageForKey:withSize:]
-[IMImageCache getImageMetadataForKey:size:scale:]
-[IMImageCache _histogramForImage:result:size:]
-[IMImageCache defaultType]
-[IMImageCache setDefaultType:]
-[IMImageCache .cxx_destruct]
+[NSValue(IMAdditions) valueWithCGRect:]
-[NSValue(IMAdditions) CGRectValue]
-[IMMappedKeyDataStore initWithPath:]
___37-[IMMappedKeyDataStore initWithPath:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMMappedKeyDataStore _fetchKeys]
-[IMMappedKeyDataStore _setData:forKey:]
___40-[IMMappedKeyDataStore _setData:forKey:]_block_invoke
___copy_helper_block_32
___destroy_helper_block_33
___40-[IMMappedKeyDataStore _setData:forKey:]_block_invoke35
___copy_helper_block_38
___destroy_helper_block_39
-[IMMappedKeyDataStore setData:forKey:completion:queue:]
___56-[IMMappedKeyDataStore setData:forKey:completion:queue:]_block_invoke
___56-[IMMappedKeyDataStore setData:forKey:completion:queue:]_block_invoke_2
___copy_helper_block_45
___destroy_helper_block_46
___copy_helper_block_48
___destroy_helper_block_49
-[IMMappedKeyDataStore _dataForKey:]
-[IMMappedKeyDataStore fetchDataForKey:handler:queue:]
___54-[IMMappedKeyDataStore fetchDataForKey:handler:queue:]_block_invoke
___54-[IMMappedKeyDataStore fetchDataForKey:handler:queue:]_block_invoke_2
___54-[IMMappedKeyDataStore fetchDataForKey:handler:queue:]_block_invoke_3
___copy_helper_block_72
___destroy_helper_block_73
___copy_helper_block_75
___destroy_helper_block_76
___54-[IMMappedKeyDataStore fetchDataForKey:handler:queue:]_block_invoke78
___copy_helper_block_79
___destroy_helper_block_80
___copy_helper_block_82
___destroy_helper_block_83
-[IMMappedKeyDataStore fetchKeysPassingTest:handler:queue:]
___59-[IMMappedKeyDataStore fetchKeysPassingTest:handler:queue:]_block_invoke
___59-[IMMappedKeyDataStore fetchKeysPassingTest:handler:queue:]_block_invoke_2
___copy_helper_block_86
___destroy_helper_block_87
___59-[IMMappedKeyDataStore fetchKeysPassingTest:handler:queue:]_block_invoke92
___copy_helper_block_93
___destroy_helper_block_94
___copy_helper_block_96
___destroy_helper_block_97
-[IMMappedKeyDataStore removeDataForKeysPassingTest:completion:queue:]
___70-[IMMappedKeyDataStore removeDataForKeysPassingTest:completion:queue:]_block_invoke
___70-[IMMappedKeyDataStore removeDataForKeysPassingTest:completion:queue:]_block_invoke_2
___copy_helper_block_99
___destroy_helper_block_100
___70-[IMMappedKeyDataStore removeDataForKeysPassingTest:completion:queue:]_block_invoke102
___copy_helper_block_103
___destroy_helper_block_104
___copy_helper_block_106
___destroy_helper_block_107
-[IMMappedKeyDataStore path]
-[IMMappedKeyDataStore setPath:]
-[IMMappedKeyDataStore .cxx_destruct]
-[_IMMemoryCacheItem description]
-[IMMemoryCache dealloc]
-[IMMemoryCache allKeys]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___24-[IMMemoryCache allKeys]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_113
___destroy_helper_block_114
-[IMMemoryCache setObject:forKey:]
___copy_helper_block_121
___destroy_helper_block_122
-[IMMemoryCache removeAllObjects]
___33-[IMMemoryCache removeAllObjects]_block_invoke
___copy_helper_block_126
___destroy_helper_block_127
___copy_helper_block_133
___destroy_helper_block_134
-[IMMemoryCache checkLimitsAndEvictObjects]
___43-[IMMemoryCache checkLimitsAndEvictObjects]_block_invoke
___copy_helper_block_151
___destroy_helper_block_152
-[IMMemoryCache count]
-[IMMemoryCache totalCost]
-[IMMemoryCache costForObjectWithKey:]
___38-[IMMemoryCache costForObjectWithKey:]_block_invoke
___copy_helper_block_163
___destroy_helper_block_164
-[IMMemoryCache numberOfCachedItems]
___36-[IMMemoryCache numberOfCachedItems]_block_invoke
___copy_helper_block_168
___destroy_helper_block_169
-[IMMemoryCache description]
___28-[IMMemoryCache description]_block_invoke
___copy_helper_block_177
___destroy_helper_block_178
___copy_helper_block_184
___destroy_helper_block_185
-[IMMemoryCache name]
-[IMMemoryCache setName:]
-[IMMemoryCache setDelegate:]
-[IMMemoryCache evictsItemsWithDiscardedContent]
-[IMMemoryCache setEvictsItemsWithDiscardedContent:]
-[IMMemoryCache totalCostLimit]
-[IMMemoryCache countLimit]
-[IMMemoryCache setCountLimit:]
-[IMMemoryCache items]
-[IMMemoryCache setItems:]
-[IMMemoryCache itemsArray]
-[IMMemoryCache setItemsArray:]
-[IMMemoryCache queue]
-[IMMemoryCache setQueue:]
-[IMMemoryCache accessQueue]
-[IMMemoryCache setAccessQueue:]
-[IMMemoryCache lastCheckTime]
-[IMMemoryCache setLastCheckTime:]
-[IMMemoryCache setCount:]
-[IMMemoryCache setTotalCost:]
-[IMMemoryCache .cxx_destruct]
+[AEAnnotationAccessibility(SafeCategory) imaxTargetClassName]
+[AEAnnotationAccessibility(SafeCategory) imaxBaseSafeCategoryClass]
-[AEAnnotationAccessibility _imaxHighlightStyleDescription]
-[AEAnnotationAccessibility accessibilityLabel]
-[AEAnnotationAccessibility accessibilityValue]
___IMCommonCoreBundle_block_invoke
-[IMLibraryFragmentFilter initWithFilterSpecification:]
-[IMLibraryFragmentFilter dealloc]
+[IMLibraryFragmentFilter supportsSecureCoding]
-[IMLibraryFragmentFilter encodeWithCoder:]
-[IMLibraryFragmentFilter initWithCoder:]
+[IMLibraryFragmentFilter fragmentFilterSpecificationForDocumentLength:librarySpecification:]
-[IMLibraryFragmentFilter addFilter:withIdentifier:]
-[IMLibraryFragmentFilter addDocument:withIdentifier:]
-[IMLibraryFragmentFilter containsDocumentWithIdentifier:]
-[IMLibraryFragmentFilter documentCount]
-[IMLibraryFragmentFilter allIdentifiers]
-[IMLibraryFragmentFilter candidateIdentifiersForQuery:]
-[IMLibraryFragmentFilter .cxx_destruct]
-[IMPersistentCache _createCacheTable:]
-[IMPersistentCache enableCaseSensitiveLike]
-[IMPersistentCache insertData:forKey:mimeType:]
-[IMPersistentCache insertCGImage:forKey:mimeType:scale:properties:]
-[IMPersistentCache insertCGImage:forKey:mimeType:properties:]
-[IMPersistentCache insertCGImage:forKey:mimeType:]
-[IMPersistentCache insertCGImage:forKey:]
-[IMPersistentCache _insertCGImage:forKey:]
-[IMPersistentCache copyCGImageForKey:]
-[IMPersistentCache copyCGImageForKey:resourceSize:scale:]
-[IMPersistentCache copyCGImageForKey:resourceSize:]
-[IMPersistentCache itemsForMimeType:]
-[IMPersistentCache deleteItemsForMimeType:]
-[IMPersistentCache dataForKey:]
-[IMPersistentCache replaceDataForKey:withData:mimeType:]
-[IMPersistentCache dataForKey:mimeType:]
-[IMPersistentCache resourceSizeForKey:]
-[IMPersistentCache allKeys]
-[IMPersistentCache clear]
-[IMPersistentCache metadataForKey:]
-[IMPersistentCache _LRUCleanupForMimeType:]
-[IMPersistentCache _sizeCleanup]
-[IMPersistentCache _updateCaches:]
-[IMPersistentCache version]
-[IMPersistentCache setLastAccessDate:]
-[IMPersistentCache _accessedIdsRemoveAllObjects]
-[IMPersistentCache path]
-[IMPersistentCache .cxx_destruct]
___copy_helper_block_
___destroy_helper_block_
-[IMPersistentCacheManager _cleanCachesInPath:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_399
___destroy_helper_block_400
___copy_helper_block_406
___destroy_helper_block_407
-[IMPersistentCacheManager addCleanupExclusionPath:]
___52-[IMPersistentCacheManager addCleanupExclusionPath:]_block_invoke
___copy_helper_block_409
___destroy_helper_block_410
-[IMPersistentCacheManager cleanUpCacheFilesInPath:withExtension:]
___66-[IMPersistentCacheManager cleanUpCacheFilesInPath:withExtension:]_block_invoke
___copy_helper_block_429
___destroy_helper_block_430
-[IMPersistentCacheManager .cxx_destruct]
-[NSManagedObject(IMAdditions) im_faultIn]
-[NSManagedObject(IMAdditions) setDifferentValue:forKey:klass:]
-[SFUMoveableFileOutputStream initWithTemporaryFile:]
-[SFUMoveableFileOutputStream initWithPath:]
-[SFUMoveableFileOutputStream dealloc]
-[SFUMoveableFileOutputStream path]
-[SFUMoveableFileOutputStream writeBuffer:size:]
-[SFUMoveableFileOutputStream offset]
-[SFUMoveableFileOutputStream canSeek]
-[SFUMoveableFileOutputStream seekToOffset:whence:]
-[SFUMoveableFileOutputStream moveToPath:]
-[SFUMoveableFileOutputStream truncateToLength:]
-[SFUMoveableFileOutputStream flush]
-[SFUMoveableFileOutputStream canCreateInputStream]
-[SFUMoveableFileOutputStream inputStream]
-[SFUMoveableFileOutputStream close]
-[SFUMoveableFileOutputStream closeLocalStream]
-[SFUDataRepresentation isReadable]
-[SFUDataRepresentation dataLength]
-[SFUDataRepresentation encodedLength]
-[SFUDataRepresentation isEncrypted]
-[SFUDataRepresentation inputStream]
-[SFUDataRepresentation bufferedInputStream]
-[SFUDataRepresentation bufferedInputStreamWithBufferSize:]
-[SFUDataRepresentation hasSameLocationAs:]
-[SFUDataRepresentation xmlDocument]
-[SFUDataRepresentation xmlReader]
_SFUXmlReaderIORead
_SFUXmlReaderIOClose
-[SFUDataRepresentation xmlReaderForGzippedData]
-[SFUDataRepresentation xmlReaderForGzippedDataWithInputStream:]
-[SFUDataRepresentation cgDataProvider]
-[SFUDataRepresentation readIntoData:]
-[SFUDataRepresentation hash]
-[SFUDataRepresentation uint32Hash]
-[SFUDataRepresentation sha1Hash]
-[SFUDataRepresentation isEqual:]
-[SFUDataRepresentation compare:]
_SFUCGDataProviderGetBytes
_SFUCGDataProviderSkipForward
_SFUCGDataProviderRewind
_SFUCGDataProviderReleaseInfo
-[IMCommonCoreAccessibility(OSX) preferencesDomain]
-[IMCommonCoreAccessibility(OSX) needsAccessibilityElements]
-[IMCommonCoreAccessibility(OSX) needsAccessibilityAnnouncements]
-[IMCommonCoreAccessibility(OSX) performExtraValidation]
-[IMCommonCoreAccessibility(OSX) addExtraSafeCategoryNamesToCollection:]
-[IMDatabaseHandle dealloc]
-[IMDatabaseHandle tableNames]
-[IMDatabaseHandle columnInfoForTable:]
-[IMDatabaseHandle version]
-[IMDatabaseHandle runSql:withArguments:]
___copy_helper_block_
___destroy_helper_block_
-[IMDatabaseHandle arrayForQuery:arguments:]
___copy_helper_block_79
___destroy_helper_block_80
-[IMDatabaseHandle stringColumnDataForQuery:withArguments:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___59-[IMDatabaseHandle stringColumnDataForQuery:withArguments:]_block_invoke
___copy_helper_block_89
___destroy_helper_block_90
-[IMDatabaseHandle passesIntegrityCheck]
-[IMDatabaseHandle _reportErrorInFunction:]
-[IMDatabaseHandle _stringRowsForQuery:]
___40-[IMDatabaseHandle _stringRowsForQuery:]_block_invoke
_getSQLResults
___copy_helper_block_140
___destroy_helper_block_141
-[IMDatabaseHandle .cxx_destruct]
-[IMDatabaseCursor initWithQuery:databaseHandle:]
-[IMDatabaseCursor dealloc]
-[IMDatabaseCursor results]
-[IMDatabaseCursor close]
-[IMDatabaseCursor columnCount]
-[IMDatabaseCursor rowCount]
-[IMDatabaseCursor columnNameAtIndex:]
-[IMDatabaseCursor columnTypeAtIndex:]
-[IMDatabaseCursor setResults:]
-[IMDatabaseCursor numColumns]
-[IMDatabaseCursor setNumColumns:]
-[IMDatabaseCursor setStatement:]
-[IMDatabaseCursor setColumnNames:]
-[IMDatabaseCursor columnTypes]
-[IMDatabaseCursor setColumnTypes:]
-[IMDatabaseCursor closed]
-[IMDatabaseCursor setClosed:]
-[IMDatabaseCursor .cxx_destruct]
-[NSNull(CMDatabaseHandleAdditions) floatValue]
-[NSNull(CMDatabaseHandleAdditions) doubleValue]
-[IMBlockActivityItemProvider activityViewController:itemForActivityType:]
-[IMBlockActivityItemProvider setUTI:]
-[IMBlockActivityItemProvider resolutionBlock]
-[IMBlockActivityItemProvider setResolutionBlock:]
-[IMBlockActivityItemProvider activityType]
-[IMBlockActivityItemProvider setActivityType:]
-[IMBlockActivityItemProvider(NSPasteboardWriting) writableTypesForPasteboard:]
-[IMBlockActivityItemProvider(NSPasteboardWriting) pasteboardPropertyListForType:]
-[NSObject(IMAccessibility) imaxLoadAccessibilityInformation]
-[NSObject(IMAccessibility) imaxRespondsToSelector:fromExtrasProtocol:]
-[NSObject(IMAccessibility) imaxFrameFromBounds:]
-[NSObject(IMAccessibility) imaxFrameToBounds:]
-[NSObject(IMAccessibility) imaxScreenScale]
-[NSObject(IMAccessibility_Internal) _imaxRespondsToSelector:fromExtrasProtocol:skipAssertions:]
+[NSURL(IMAdditions) assetIDFromURL:]
+[NSURL(IMAdditions) storeURLforISBN:]
+[NSURL(IMAdditions) storeURLforISBNURI:]
-[NSURL(IMAdditions) storeURL]
-[NSURL(IMAdditions) httpsStoreURL]
-[NSURL(IMAdditions) storeURL2]
-[NSURL(IMAdditions) href]
-[NSURL(IMAdditions) URLByAppendingQueryString:]
-[NSURL(IMAdditions) URLByReplacingWithScheme:]
-[NSURL(IMAdditions) _lastModDateFormatter]
-[NSURL(IMAdditions) lastModifiedDateOfResource]
-[NSURL(IMAdditions) unescapedPath]
-[NSURL(IMAdditions) xattrNamed:]
-[NSURL(IMAdditions) setXattr:named:]
+[CIFilter(IMCompatibilty) im_multiplyFilter]
+[CIFilter(IMCompatibilty) im_blendFilter]
-[IMAdminTable setDatabaseVersion:]
-[IMAdminTable lastAccessDate]
-[IMAdminTable blobValueForKey:domain:]
-[IMAdminTable stringValueForKey:domain:]
-[IMAdminTable .cxx_destruct]
-[NSString(IMAdamID) adamIDStringValue]
-[NSString(IMAdamID) adamIDNumberValue]
-[NSString(IMAdamID) adamIDInt64Value]
-[NSNumber(IMAdamID) adamIDStringValue]
-[NSNumber(IMAdamID) adamIDNumberValue]
-[NSNumber(IMAdamID) adamIDInt64Value]
+[SFUCryptoUtils generateRandomDataInBuffer:length:]
+[SFUCryptoUtils generateRandomSalt]
+[SFUCryptoUtils generateRandomSaltWithLength:]
+[SFUCryptoUtils hashForPassphrase:withSalt:]
+[SFUCryptoUtils ivLengthForKey:]
+[SFUCryptoUtils generatePassphraseVerifierForKey:verifierVersion:]
+[SFUCryptoUtils iterationCountFromPassphraseVerifier:]
+[SFUCryptoUtils saltFromVerifier:saltLength:]
+[SFUCryptoUtils saltForSageFiles]
+[SFUCryptoUtils checkKey:againstPassphraseVerifier:]
+[SFUCryptoUtils isEncryptionVersionAndFormatSupportedInPassphraseVerifier:]
+[SFUCryptoUtils newBufferedInputStreamForDecryptingFile:key:isDeflated:zipStream:]
+[SFUCryptoUtils newBufferedInputStreamForDecryptingZippedBundle:key:zipArchive:isDeflated:zipStream:]
+[SFUCryptoUtils encodePassphraseHint:]
+[SFUCryptoUtils decodePassphraseHint:]
+[SFUCryptoUtils sha256HashFromData:]
+[SFUCryptoUtils sha256HashFromStorage:]
+[SFUCryptoUtils sha256HashFromString:]
+[SFUCryptoUtils sha1HashFromStorage:]
-[NSData(SFUCryptoUtilsAdditions) writeToURL:encryptionKey:]
+[NSData(SFUCryptoUtilsAdditions) dataWithContentsOfURL:decryptionKey:]
__ZL8hmacsha1PKvjS0_jPv
-[SFUCryptoInputStream initForDecryptionWithInputStream:key:]
-[SFUCryptoInputStream dealloc]
-[SFUCryptoInputStream offset]
-[SFUCryptoInputStream readToBuffer:size:]
-[SFUCryptoInputStream canSeek]
-[SFUCryptoInputStream seekToOffset:]
-[SFUCryptoInputStream disableSystemCaching]
-[SFUCryptoInputStream enableSystemCaching]
-[SFUCryptoInputStream close]
-[SFUCryptoInputStream closeLocalStream]
+[BKAssetUtilities contentTypeForPath:]
+[BKAssetUtilities localizedAssetKindForContentType:]
+[BKAssetUtilities dictionaryRepresentationForAsset:]
+[NSColor(IMCompatibility) im_colorWithWhite:alpha:]
+[NSColor(IMCompatibility) im_colorWithRed:green:blue:alpha:]
+[NSColor(IMCompatibility) im_colorWithHue:saturation:brightness:alpha:]
-[NSColor(IMCompatibility) im_getRed:green:blue:alpha:]
-[NSColor(IMCompatibility) im_getHue:saturation:brightness:alpha:]
-[NSColor(IMCompatibility) im_getWhite:alpha:]
-[NSColor(IMCompatibility) im_lightenedColorByFactor:]
-[NSColor(IMCompatibility) im_darkenedColorByFactor:]
-[NSColor(IMCompatibility) p_isGrayscale]
+[NSColor(IMColorDescription) im_colorWithSRGBDescription:]
-[AEUserPublishingProductProfile(BKSeriesManagerAdditions) children]
-[AEUserPublishingProductProfile(BKSeriesManagerAdditions) childrenIDs]
-[AEUserPublishingProductProfile(BKSeriesManagerAdditions) seriesID]
-[NSPersistentStoreCoordinator(BKSPI_NSPersistentStoreCoordinator) bkspi_destroyPersistentStoreAtURL:withType:error:]
___isK48_block_invoke
___isN18_block_invoke
___isN88_block_invoke
___isMulticore_block_invoke
___deviceVersion_block_invoke
+[AEAnnotationActivityItemProviderSource truncatedAnnotationSelectedText:]
-[AEAnnotationActivityItemProviderSource copyrightCitation]
-[AEAnnotationActivityItemProviderSource chapterTitleForAnnotation:]
-[AEAnnotationActivityItemProviderSource annotationsPageRange]
-[AEAnnotationActivityItemProviderSource text]
-[AEAnnotationActivityItemProviderSource annotations]
-[AEAnnotationActivityItemProviderSource paginationDataSource]
-[AEAnnotationActivityItemProviderSource areCitationAllowed]
-[AEAnnotationSocialActivityItemProvider supportedActivityTypes]
-[AEAnnotationSocialActivityItemProvider characterLimit]
-[AEAnnotationSocialActivityItemProvider text]
-[AEAnnotationFacebookActivityItemProvider characterLimit]
___65-[AEAnnotationFacebookActivityItemProvider expandedItemProviders]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___65-[AEAnnotationFacebookActivityItemProvider expandedItemProviders]_block_invoke95
___copy_helper_block_105
___destroy_helper_block_106
___65-[AEAnnotationFacebookActivityItemProvider expandedItemProviders]_block_invoke110
___copy_helper_block_113
___destroy_helper_block_114
+[AEAnnotationTwitterWeiboActivityItemProvider citationWithPropertySource:activityType:storeURL:pageRange:]
___107+[AEAnnotationTwitterWeiboActivityItemProvider citationWithPropertySource:activityType:storeURL:pageRange:]_block_invoke
___copy_helper_block_170
___destroy_helper_block_171
-[AEAnnotationTwitterWeiboActivityItemProvider characterLimit]
-[AEAnnotationTwitterWeiboActivityItemProvider text]
___69-[AEAnnotationTwitterWeiboActivityItemProvider expandedItemProviders]_block_invoke
___copy_helper_block_187
___destroy_helper_block_188
-[AEAnnotationHTMLActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationHTMLActivityItemProvider activityViewController:subjectForActivityType:]
-[AEAnnotationHTMLActivityItemProvider annotationHTMLGeneratorNumberOfAnnotations]
-[AEAnnotationHTMLActivityItemProvider annotationHTMLGeneratorAnnotationAtIndex:]
-[AEAnnotationHTMLActivityItemProvider annotationHTMLGeneratorChapterTitleForAnnotation:]
-[AEAnnotationHTMLActivityItemProvider populateHTMLGenerator:]
-[AEAnnotationHTMLActivityItemProvider activityType]
-[AEAnnotationHTMLActivityItemProvider setActivityType:]
-[AEAnnotationPrintActivityItemProvider supportedActivityTypes]
-[AEAnnotationPrintActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationPrintActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAnnotationGroupHTMLActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationGroupPrintActivityItemProvider supportedActivityTypes]
-[AEAnnotationGroupPrintActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationGroupPrintActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAnnotationGroupPrintActivityItemProvider populateHTMLGenerator:]
-[AEAnnotationTextActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationTextActivityItemProvider activityType]
-[AEAnnotationTextActivityItemProvider setActivityType:]
-[AEAnnotationGroupRTFActivityItemProvider supportedActivityTypes]
-[AEAnnotationGroupRTFActivityItemProvider activityViewControllerPlaceholderItem:]
-[AEAnnotationGroupRTFActivityItemProvider activityViewController:itemForActivityType:]
-[AEAnnotationGroupRTFActivityItemProvider activityType]
-[AEAnnotationGroupRTFActivityItemProvider setActivityType:]
-[AEAnnotationGroupRTFActivityItemProvider .cxx_destruct]
-[AEAnnotationHTMLActivityItemProvider(NSPasteboardWriting) writableTypesForPasteboard:]
-[AEAnnotationHTMLActivityItemProvider(NSPasteboardWriting) writingOptionsForType:pasteboard:]
-[AEAnnotationHTMLActivityItemProvider(NSPasteboardWriting) pasteboardPropertyListForType:]
-[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:]
-[SFUCryptoKey initAes128KeyFromPassphrase:withIterationCountAndSaltDataFromCryptoKey:]
-[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:]
-[SFUCryptoKey initAes128KeyFromPassphrase:iterationCount:saltData:]
-[SFUCryptoKey initAes128KeyFromPassphrase:length:iterationCount:saltData:]
-[SFUCryptoKey initAes128Key:length:iterationCount:]
-[SFUCryptoKey dealloc]
-[SFUCryptoKey keyType]
-[SFUCryptoKey iterationCount]
-[SFUCryptoKey keyData]
-[SFUCryptoKey keyLength]
-[SFUCryptoKey saltData]
-[SFUCryptoKey passphrase]
-[SFUZipEntry initFromCentralFileHeader:dataRepresentation:]
-[SFUZipEntry initWithDataRepresentation:compressionMethod:compressedSize:uncompressedSize:offset:crc:]
-[SFUZipEntry dealloc]
-[SFUZipEntry isReadable]
-[SFUZipEntry dataLength]
-[SFUZipEntry encodedLength]
-[SFUZipEntry inputStream]
-[SFUZipEntry data]
-[SFUZipEntry copyToFile:]
-[SFUZipEntry isCompressed]
-[SFUZipEntry isEncrypted]
-[SFUZipEntry isBackedByFile]
-[SFUZipEntry backingFilePath]
-[SFUZipEntry backingFileDataOffset]
-[SFUZipEntry crc]
-[SFUZipEntry readZip64ExtraField:size:]
-[SFUZipEntry setCompressionFlags:]
-[SFUZipEntry setCryptoKey:]
-[SFUZipEntry setDataLength:]
-[SFUZipEntry hasSameLocationAs:]
-[SFUZipEntry(Private) dataOffset]
-[SFUZipEntry(Private) calculateEncodedLength]
-[NSString(IMCompatibility) im_drawInRect:withFont:lineBreakMode:alignment:]
-[NSString(IMCompatibility) im_sizeWithFont:constrainedToSize:lineBreakMode:]
-[NSImage(IMCompatibility) im_scale]
-[NSImage(IMCompatibility) im_initWithCGImage:scale:orientation:]
-[NSImage(IMCompatibility) im_imageWithSize:]
-[NSImage(IMCompatibility) im_imageWithMaxBounds:]
+[NSImage(IMCompatibility) im_imageWithSize:flipped:drawingHandler:]
+[NSImage(IMCompatibility) im_currentContext]
-[SFUCryptor initWithKey:operation:iv:ivLength:]
-[SFUCryptor initWithKey:operation:iv:ivLength:usePKCS7Padding:]
-[SFUCryptor dealloc]
-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:error:]
-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:]
-[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:]
+[SFUZipArchive isZipArchiveAtPath:]
-[SFUZipArchive initWithPath:collapseCommonRootDirectory:]
-[SFUZipArchive initWithData:collapseCommonRootDirectory:]
-[SFUZipArchive dealloc]
-[SFUZipArchive entryWithName:]
-[SFUZipArchive entryWithName:dataLength:]
-[SFUZipArchive allEntryNames]
-[SFUZipArchive isEncrypted]
-[SFUZipArchive passphraseVerifier]
-[SFUZipArchive passphraseHint]
-[SFUZipArchive encryptedDocumentUuid]
-[SFUZipArchive setCryptoKey:]
-[SFUZipArchive decompressAtPath:]
-[SFUZipArchive(Private) readEntries]
-[SFUZipArchive(Private) collapseCommonRootDirectory]
-[SFUZipArchive(Private) readEndOfCentralDirectoryFromInputStream:]
-[SFUZipArchive(Private) searchForEndOfCentralDirectoryFromInputStream:offset:]
-[SFUZipArchive(Private) readZip64EndOfCentralDirectoryFromInputStream:eocdOffset:]
-[SFUZipArchive(Private) readZip64EndOfCentralDirectoryFromInputStream:offset:]
-[SFUZipArchive(Private) readFilenameFromBuffer:size:]
-[SFUZipArchive(Private) readExtraFieldFromBuffer:size:entry:]
-[SFUZipRecordInputStream initWithDataRepresentation:]
-[SFUZipRecordInputStream dealloc]
-[SFUZipRecordInputStream dataAtOffset:size:end:]
+[IMCommonCoreAccessibility sharedInstance]
___43+[IMCommonCoreAccessibility sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[IMCommonCoreAccessibility performValidation]
-[IMCommonCoreAccessibility addSafeCategoryNamesToCollection:]
-[IMCommonCoreAccessibility loadAccessibilitySupport]
-[IMCommonCoreAccessibility _isAccessibilitySupportLoaded]
-[IMCommonCoreAccessibility _setAccessibilitySupportLoaded:]
-[NSObject(IMAccessibilitySafeCategory_Private) _imaxValidatedValueForKey:expectedClass:expectedTypeEncoding:]
-[NSObject(IMAccessibilitySafeCategory_Private) _imaxValidatedValueForKey:expectedClass:possibleExpectedTypeEncodings:]
-[NSObject(IMAccessibilitySafeCategory) imaxValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxBoolValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxIntValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxUnsignedIntValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxIntegerValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxUnsignedIntegerValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxFloatValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxDoubleValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxTimeIntervalValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxRangeValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxCGFloatValueForKey:]
-[NSObject(IMAccessibilitySafeCategory) imaxIvarForKey:]
__IMAccessibilityCopyClassPath
___IMAccessibilityInstallSafeCategories_block_invoke
__IMAccessibilitySafeCategoryDependsOnSafeCategory
___copy_helper_block_
___destroy_helper_block_
+[IMAccessibilitySafeCategory imaxTargetClassName]
+[IMAccessibilitySafeCategory imaxTargetClass]
+[IMAccessibilitySafeCategory imaxBaseSafeCategoryClass]
+[IMAccessibilitySafeCategory imaxAddSafeCategoryDependenciesToCollection:]
+[IMAccessibilitySafeCategory _imaxInitializeSafeCategory]
+[IMAccessibilitySafeCategory _imaxAddCategoryMethod:toClass:isClass:]
+[IMAccessibilitySafeCategory _imaxInstallSafeCategoryOnClassNamed:]
+[IMAccessibilitySafeCategory _imaxInstallSafeCategoryOnClass:]
___IMAccessibilityShouldPerformValidationChecks_block_invoke
___IMAccessibilityShouldCrashOnValidationError_block_invoke
___IMAccessibilityShouldCrashOnValidationErrorAfterLaunch_block_invoke
_____IMAccessibilityHandleValidationErrorWithDescription_block_invoke
_____IMAccessibilityHandleValidationErrorWithDescription_block_invoke_2
___IMAccessibilityValidationTypeEncodingMatchesActualTypeEncoding
__IMAccessibilitySafeCategoryAddDependenciesToArray
-[BKAssetActivityPropertySource init]
___copy_helper_block_
___destroy_helper_block_
-[BKAssetActivityPropertySource setAsset:]
-[Reachability startNotifier]
_ReachabilityCallback
-[Reachability stopNotifier]
-[Reachability dealloc]
+[Reachability reachabilityWithHostName:]
+[Reachability reachabilityWithAddress:]
+[Reachability reachabilityForInternetConnection]
+[Reachability reachabilityForLocalWiFi]
-[Reachability localWiFiStatusForFlags:]
-[Reachability networkStatusForFlags:]
-[Reachability connectionRequired]
-[Reachability currentReachabilityStatus]
+[Reachability sharedReachabilityForInternetConnection]
___55+[Reachability sharedReachabilityForInternetConnection]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[BKSeriesInfo initWithDictionary:]
+[BKSeriesInfo seriesInfoWithDictionary:]
-[BKSeriesInfo description]
-[BKSeriesInfo adamId]
-[BKSeriesInfo author]
-[BKSeriesInfo isExplicit]
-[BKSeriesInfo isContainer]
-[BKSeriesInfo popularity]
-[BKSeriesInfo sequenceNumber]
-[BKSeriesInfo sequenceDisplayName]
-[BKSeriesInfo seriesId]
-[BKSeriesInfo seriesTitle]
-[BKSeriesInfo title]
-[BKSeriesInfo children]
-[BKSeriesInfo childrenIds]
-[BKSeriesInfo genres]
-[BKSeriesInfo genreNames]
-[BKSeriesInfo kind]
-[BKSeriesInfo name]
-[BKSeriesInfo nameRaw]
-[BKSeriesInfo shortUrl]
-[BKSeriesInfo tellAFriendMessageContentsUrl]
-[BKSeriesInfo genre]
-[BKSeriesInfo infoDictionary]
-[BKSeriesInfo setInfoDictionary:]
-[BKSeriesInfo .cxx_destruct]
-[IMBloomFilter initWithSpecification:hashProvider:]
-[IMBloomFilter encodeWithCoder:]
-[IMBloomFilter addKey:]
-[IMBloomFilter usageDescription]
-[IMBloomFilter indexSize]
___IMBloomFilterStringHashProvider_block_invoke
___IMBloomFilterInt64HashProvider_block_invoke
___IMBloomFilterInt64HashProviderInternal_block_invoke
___IMBloomFilterStringHashProviderInternal_block_invoke
___IMBloomFilterStringHashProviderInternal_block_invoke_2
___IMBloomFilterStringHashProviderInternal_block_invoke_3
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_73
___destroy_helper_block_74
___copy_helper_block_76
___destroy_helper_block_77
-[BKSeriesFolderLayer _addRects:toMaskLayer:maskIn:].fillColors
-[IMImageCache imageWithString:size:save:].locations
-[IMImageCache imageWithString:size:save:].components
+[NSURL(IMAdditions) ISBNForURI:].digits
_IMBloomFilterInt64HashProviderInternal.seeds
_encodingTable
-[NSData(IMAdditions) md5].hexDigits
GCC_except_table22
GCC_except_table6
GCC_except_table1
GCC_except_table3
GCC_except_table14
GCC_except_table93
GCC_except_table100
GCC_except_table0
GCC_except_table0
GCC_except_table6
GCC_except_table5
GCC_except_table11
GCC_except_table21
GCC_except_table10
GCC_except_table21
GCC_except_table25
GCC_except_table61
GCC_except_table78
GCC_except_table82
GCC_except_table18
GCC_except_table22
GCC_except_table0
GCC_except_table1
GCC_except_table1
GCC_except_table5
GCC_except_table33
GCC_except_table17
GCC_except_table22
GCC_except_table26
GCC_except_table0
GCC_except_table2
GCC_except_table0
GCC_except_table0
GCC_except_table2
GCC_except_table0
GCC_except_table2
GCC_except_table0
GCC_except_table18
GCC_except_table45
GCC_except_table2
GCC_except_table3
GCC_except_table4
GCC_except_table5
GCC_except_table10
GCC_except_table20
GCC_except_table23
GCC_except_table25
GCC_except_table28
GCC_except_table30
GCC_except_table31
GCC_except_table34
GCC_except_table36
GCC_except_table0
GCC_except_table1
GCC_except_table8
GCC_except_table10
GCC_except_table15
GCC_except_table17
GCC_except_table18
GCC_except_table6
GCC_except_table7
GCC_except_table11
GCC_except_table12
GCC_except_table15
GCC_except_table18
GCC_except_table22
GCC_except_table26
GCC_except_table27
GCC_except_table17
GCC_except_table0
GCC_except_table0
GCC_except_table8
GCC_except_table20
GCC_except_table21
GCC_except_table1
GCC_except_table2
GCC_except_table12
GCC_except_table13
GCC_except_table21
GCC_except_table5
GCC_except_table18
___block_descriptor_tmp
___block_descriptor_tmp31
___block_descriptor_tmp60
___block_descriptor_tmp64
___block_descriptor_tmp69
___block_descriptor_tmp90
___block_descriptor_tmp98
___block_descriptor_tmp124
___block_descriptor_tmp127
___block_descriptor_tmp130
___block_descriptor_tmp133
___block_descriptor_tmp181
___block_descriptor_tmp193
___block_literal_global
___block_descriptor_tmp215
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp24
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp209
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp33
___block_descriptor_tmp58
___block_literal_global59
___block_descriptor_tmp62
___block_literal_global63
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp565
___block_descriptor_tmp568
___block_descriptor_tmp583
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp10
___block_descriptor_tmp14
___block_descriptor_tmp19
___block_descriptor_tmp34
___block_descriptor_tmp37
___block_descriptor_tmp40
___block_descriptor_tmp
___block_descriptor_tmp147
___block_descriptor_tmp152
___block_descriptor_tmp166
___block_descriptor_tmp225
___block_descriptor_tmp236
___block_descriptor_tmp244
___block_descriptor_tmp248
___block_descriptor_tmp300
___block_descriptor_tmp311
___block_descriptor_tmp315
___block_descriptor_tmp350
___block_descriptor_tmp357
___block_descriptor_tmp
___block_descriptor_tmp168
___block_descriptor_tmp171
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp349
___block_descriptor_tmp361
___block_descriptor_tmp365
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp23
___block_descriptor_tmp45
___block_descriptor_tmp50
___block_descriptor_tmp55
___block_descriptor_tmp60
___block_descriptor_tmp164
___block_descriptor_tmp
___block_descriptor_tmp150
___block_descriptor_tmp153
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp93
___block_descriptor_tmp99
___block_descriptor_tmp102
___block_descriptor_tmp108
___block_descriptor_tmp111
___block_descriptor_tmp117
___block_descriptor_tmp120
___block_descriptor_tmp126
___block_descriptor_tmp129
___block_descriptor_tmp135
___block_descriptor_tmp138
___block_descriptor_tmp144
___block_descriptor_tmp147
___block_descriptor_tmp153
___block_descriptor_tmp158
___block_descriptor_tmp172
___block_descriptor_tmp178
___block_descriptor_tmp181
___block_descriptor_tmp187
___block_descriptor_tmp190
___block_descriptor_tmp196
___block_descriptor_tmp199
___block_descriptor_tmp205
___block_descriptor_tmp208
___block_descriptor_tmp214
___block_descriptor_tmp217
___block_descriptor_tmp223
___block_descriptor_tmp226
___block_descriptor_tmp232
___block_descriptor_tmp235
___block_descriptor_tmp239
___block_descriptor_tmp245
___block_descriptor_tmp248
___block_descriptor_tmp254
___block_descriptor_tmp257
___block_descriptor_tmp263
___block_descriptor_tmp266
___block_descriptor_tmp272
___block_descriptor_tmp275
___block_descriptor_tmp281
___block_descriptor_tmp284
___block_descriptor_tmp290
___block_descriptor_tmp293
___block_descriptor_tmp299
___block_descriptor_tmp302
___block_descriptor_tmp306
___block_descriptor_tmp312
___block_descriptor_tmp315
___block_descriptor_tmp321
___block_descriptor_tmp324
___block_descriptor_tmp330
___block_descriptor_tmp333
___block_descriptor_tmp339
___block_descriptor_tmp342
___block_descriptor_tmp348
___block_descriptor_tmp351
___block_descriptor_tmp357
___block_descriptor_tmp360
___block_descriptor_tmp366
___block_descriptor_tmp369
___block_descriptor_tmp373
___block_descriptor_tmp379
___block_descriptor_tmp382
___block_descriptor_tmp388
___block_descriptor_tmp391
___block_descriptor_tmp397
___block_descriptor_tmp400
___block_descriptor_tmp406
___block_descriptor_tmp409
___block_descriptor_tmp415
___block_descriptor_tmp418
___block_descriptor_tmp424
___block_descriptor_tmp427
___block_descriptor_tmp433
___block_descriptor_tmp436
___block_descriptor_tmp440
___block_descriptor_tmp446
___block_descriptor_tmp449
___block_descriptor_tmp455
___block_descriptor_tmp458
___block_descriptor_tmp464
___block_descriptor_tmp467
___block_descriptor_tmp473
___block_descriptor_tmp476
___block_descriptor_tmp482
___block_descriptor_tmp485
___block_descriptor_tmp491
___block_descriptor_tmp494
___block_descriptor_tmp500
___block_descriptor_tmp503
___block_descriptor_tmp526
___block_literal_global527
___block_descriptor_tmp528
___block_literal_global529
___block_descriptor_tmp536
___block_descriptor_tmp540
___block_descriptor_tmp543
___block_descriptor_tmp547
___block_descriptor_tmp550
___block_descriptor_tmp554
___block_descriptor_tmp557
___block_descriptor_tmp561
___block_descriptor_tmp564
___block_descriptor_tmp568
___block_descriptor_tmp571
___block_descriptor_tmp575
___block_descriptor_tmp590
___block_literal_global591
___block_descriptor_tmp594
___block_literal_global595
___block_descriptor_tmp598
___block_literal_global599
___block_descriptor_tmp600
___block_literal_global601
___block_descriptor_tmp602
___block_literal_global603
___block_descriptor_tmp604
___block_literal_global605
___block_descriptor_tmp609
___block_literal_global610
___block_descriptor_tmp611
___block_literal_global612
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp4
___block_literal_global5
___block_descriptor_tmp18
___block_literal_global19
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp288
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp72
___block_descriptor_tmp187
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp74
___block_descriptor_tmp97
___block_descriptor_tmp126
___block_descriptor_tmp131
___block_descriptor_tmp137
___block_descriptor_tmp140
___block_descriptor_tmp161
___block_descriptor_tmp164
___block_descriptor_tmp
___block_descriptor_tmp34
___block_descriptor_tmp40
___block_descriptor_tmp47
___block_descriptor_tmp50
___block_descriptor_tmp74
___block_descriptor_tmp77
___block_descriptor_tmp81
___block_descriptor_tmp84
___block_descriptor_tmp89
___block_descriptor_tmp95
___block_descriptor_tmp98
___block_descriptor_tmp101
___block_descriptor_tmp105
___block_descriptor_tmp108
___block_descriptor_tmp
___block_descriptor_tmp115
___block_descriptor_tmp123
___block_descriptor_tmp128
___block_descriptor_tmp135
___block_descriptor_tmp153
___block_descriptor_tmp165
___block_descriptor_tmp170
___block_descriptor_tmp179
___block_descriptor_tmp186
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp401
___block_descriptor_tmp408
___block_descriptor_tmp411
___block_descriptor_tmp431
___block_descriptor_tmp
___block_descriptor_tmp81
___block_descriptor_tmp91
___block_descriptor_tmp142
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp33
___block_literal_global34
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp4
___block_literal_global5
___block_descriptor_tmp7
___block_literal_global8
___block_descriptor_tmp10
___block_literal_global11
___block_descriptor_tmp12
___block_literal_global13
___block_descriptor_tmp
___block_descriptor_tmp107
___block_descriptor_tmp115
___block_descriptor_tmp173
___block_descriptor_tmp189
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp159
___block_literal_global
___block_descriptor_tmp160
___block_literal_global161
___block_descriptor_tmp162
___block_literal_global163
___block_descriptor_tmp171
___block_literal_global172
___block_descriptor_tmp173
___block_literal_global174
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp62
___block_literal_global63
___block_descriptor_tmp64
___block_literal_global65
___block_descriptor_tmp67
___block_literal_global68
___block_descriptor_tmp69
___block_literal_global70
___block_descriptor_tmp72
___block_descriptor_tmp75
___block_descriptor_tmp79
_OBJC_IVAR_$_BKSeriesManagerUpdater._queue
_OBJC_IVAR_$_BKSeriesManagerUpdater._completionBlock
_OBJC_IVAR_$_BKSeriesManagerUpdater._database
_OBJC_IVAR_$_BKSeriesManagerUpdater._manager
_OBJC_IVAR_$_BKSeriesManagerUpdater._managedObjectContext
_OBJC_IVAR_$_BKSeriesManagerUpdater._formattedPrices
_OBJC_IVAR_$_BKSeriesManagerUpdater._finished
_OBJC_IVAR_$_AEAnnotationPredicateFilter._blockFilter
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mOutputStream
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mCryptoKey
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mPassphraseHint
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mEntries
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mFreeList
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mBuffer
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mEncryptedDocumentUuid
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mEntryOutputStream
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mCurrentEntry
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mCurrentFreeSpace
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mLastEntryInFile
_OBJC_IVAR_$_SFUZipArchiveOutputStream.mFreeBytes
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._asset
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._defaultSize
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._minimumSize
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._shouldMaintainAspectRatio
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._title
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._tocTitle
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._containerBackgroundColor
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._toolbarItemMask
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._supportsStudyCards
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._supportsSearchPageNumber
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._assetViewerDelegate
_OBJC_IVAR_$_IMAssetViewerPlugInInstanceDescriptor._locationToSelect
_OBJC_IVAR_$_SFUBufferedInputStream.mStream
_OBJC_IVAR_$_SFUBufferedInputStream.mBufferSize
_OBJC_IVAR_$_SFUBufferedInputStream.mBuffer
_OBJC_IVAR_$_SFUBufferedInputStream.mBufferStart
_OBJC_IVAR_$_SFUBufferedInputStream.mBufferEnd
_OBJC_IVAR_$_SFUBufferedInputStream.mBufferOffset
_OBJC_IVAR_$_IMPlatformAbstraction._sandboxed
_OBJC_IVAR_$_IMPlatformAbstraction._reportError
_OBJC_IVAR_$_IMLogger._runtimeOverrideRegex
_OBJC_IVAR_$_AEAssetActivityItemProvider._shareType
_OBJC_IVAR_$_AEAssetActivityItemProvider._annotations
_OBJC_IVAR_$_AEAssetActivityItemProvider._propertySource
_OBJC_IVAR_$_AEAssetActivityItemProvider._paginationDataSource
_OBJC_IVAR_$_AEAssetActivityItemProvider._citationsAllowed
_OBJC_IVAR_$_AEAssetActivityItemProvider._activityType
_OBJC_IVAR_$_AEAssetActivityItemProvider._contentProtected
_OBJC_IVAR_$_IMStopWatch._startTime
_OBJC_IVAR_$_IMStopWatch._description
_OBJC_IVAR_$_AEAssetHTMLGenerator._storeId
_OBJC_IVAR_$_AEAssetHTMLGenerator._epubId
_OBJC_IVAR_$_AEAssetHTMLGenerator._title
_OBJC_IVAR_$_AEAssetHTMLGenerator._author
_OBJC_IVAR_$_AEAssetHTMLGenerator._sortAuthor
_OBJC_IVAR_$_AEAssetHTMLGenerator._publisherLocation
_OBJC_IVAR_$_AEAssetHTMLGenerator._publisherName
_OBJC_IVAR_$_AEAssetHTMLGenerator._publisherYear
_OBJC_IVAR_$_AEAssetHTMLGenerator._readingDirection
_OBJC_IVAR_$_AEAssetHTMLGenerator._genre
_OBJC_IVAR_$_AEAssetHTMLGenerator._dataSource
_OBJC_IVAR_$_AEAssetHTMLGenerator._contentProtected
_OBJC_IVAR_$_AEAssetHTMLGenerator._forPrint
_OBJC_IVAR_$_AEAnnotationGroupRTFGenerator._annotations
_OBJC_IVAR_$_AEAnnotationGroupRTFGenerator._bookCitationString
_OBJC_IVAR_$_AEAnnotationGroupRTFGenerator._bookURLPrefix
_OBJC_IVAR_$_AEAnnotationGroupRTFGenerator._bookURL
_OBJC_IVAR_$_AEAnnotationGroupRTFGenerator._citationsAllowed
_OBJC_IVAR_$_AESingleAnnotationHTMLGenerator._wordLimit
_OBJC_IVAR_$_AESingleAnnotationHTMLGenerator._annotations
_OBJC_IVAR_$_AESingleAnnotationHTMLGenerator._citationsAllowed
_OBJC_IVAR_$_AESingleAnnotationHTMLGenerator._paginationDataSource
_OBJC_IVAR_$_SFUZipArchiveMemoryDataRepresentation.mData
_OBJC_IVAR_$_AEAnnotationManagedObjectContext._annotationProvider
_OBJC_IVAR_$_AEAnnotationProvider._acknowledgedMismatchingAssetIDs
_OBJC_IVAR_$_AEAnnotationProvider._delegate
_OBJC_IVAR_$_SFUFileDataRepresentation.mPath
_OBJC_IVAR_$_SFUFileDataRepresentation.mCryptoKey
_OBJC_IVAR_$_SFUFileDataRepresentation.mPlaintextDataLength
_OBJC_IVAR_$_SFUFileDataRepresentation.mSharedFd
_OBJC_IVAR_$_SFUFileDataRepresentation.mInputStream
_OBJC_IVAR_$_SFUFileDataRepresentation.mDeleteFileWhenDone
_OBJC_IVAR_$_SFUFileDataRepresentation.mFileType
_OBJC_IVAR_$_SFUFileDataRepresentation.mFileLength
_OBJC_IVAR_$_SFUFileDataRepresentation.mHasFileAttributes
_OBJC_IVAR_$_IMJPEGPrefetch._queue
_OBJC_IVAR_$_IMJPEGPrefetch._requestGroup
_OBJC_IVAR_$_IMJPEGPrefetch._cancelled
_OBJC_IVAR_$_IMJPEGPrefetch._optimalSize
_OBJC_IVAR_$_IMJPEGPrefetch._options
_OBJC_IVAR_$_IMJPEGPrefetch._cachedImage
_OBJC_IVAR_$_IMJPEGPrefetch._dataIsLoading
_OBJC_IVAR_$_IMUbiquitousDataProvider._localPersistentStoreLoader
_OBJC_IVAR_$_IMUbiquitousDataProvider._ubiquitousStoreRetryTimer
_OBJC_IVAR_$_IMUbiquitousDataProvider._onceToken
_OBJC_IVAR_$_IMUbiquitousDataProvider._ubiquityEnabled
_OBJC_IVAR_$_IMUbiquitousDataProvider._managedObjectModel
_OBJC_IVAR_$_IMUbiquitousDataProvider._persistentStoreCoordinator
_OBJC_IVAR_$_IMUbiquitousDataProvider._currentPersistentStore
_OBJC_IVAR_$_IMUbiquitousDataProvider._currentPersistentStoreType
_OBJC_IVAR_$_IMUbiquitousDataProvider._bringUpPersistentStoreLoader
_OBJC_IVAR_$_IMUbiquitousDataProvider._ubiquityPersistentStoreLoader
_OBJC_IVAR_$_IMUbiquitousDataProvider._metadataDictionary
_OBJC_IVAR_$_IMUbiquitousDataProvider._metadataDictionaryDirty
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._identifier
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._persistentStoreURL
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._storeName
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._managedObjectModelName
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._isUbiquitous
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._ubiquitousStoreIdentifier
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._ubiquitousContentName
_OBJC_IVAR_$_IMUbiquitousPersistentStoreLoader._ubiquitousPeerIDOverride
_OBJC_IVAR_$_IMCoreDataSource._persistentStoreURL
_OBJC_IVAR_$_IMCoreDataSource._persistentStoreCoordinator
_OBJC_IVAR_$_IMCoreDataSource._managedObjectModel
_OBJC_IVAR_$_IMCoreDataSource._persistentStore
_OBJC_IVAR_$_IMCoreDataSource._metadataDictionary
_OBJC_IVAR_$_IMCoreDataSource._metadataDictionaryDirty
_OBJC_IVAR_$_AEUserPublishingProductProfile._profileDictionary
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._propertySource
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._storeId
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._storeUrl
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._storeUrlRequested
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._storeShortUrl
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._storeShortUrlRequested
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._epubID
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._assetCover
_OBJC_IVAR_$_AEAssetActivityItemProviderSource._activityType
_OBJC_IVAR_$_IMActivityController._activityItems
_OBJC_IVAR_$_IMActivityController._applicationActivities
_OBJC_IVAR_$_IMActivityController._fallbackViewControllerClass
_OBJC_IVAR_$_IMActivityController._excludedActivityTypes
_OBJC_IVAR_$_IMActivityController._expandedActivityItems
_OBJC_IVAR_$_IMActivityController._completionHandler
_OBJC_IVAR_$_IMActivityController._managedBook
_OBJC_IVAR_$_SFUFileInputStream.mFd
_OBJC_IVAR_$_SFUFileInputStream.mStartOffset
_OBJC_IVAR_$_SFUFileInputStream.mCurrentOffset
_OBJC_IVAR_$_SFUFileInputStream.mEndOffset
_OBJC_IVAR_$_SFUFileInputStream.mIsCachingDisabled
_OBJC_IVAR_$_BKSeriesManager._database
_OBJC_IVAR_$_BKSeriesManager._timeOut
_OBJC_IVAR_$_BKSeriesManager._queue
_OBJC_IVAR_$_BKSeriesManager._isFetchingSeries
_OBJC_IVAR_$_BKSeriesManager._pendingAdamIds
_OBJC_IVAR_$_AEAnnotationTheme._invertedContent
_OBJC_IVAR_$_BKSeriesFolderLayer._type
_OBJC_IVAR_$_BKSeriesFolderLayer._layoutInfo
_OBJC_IVAR_$_BKSeriesFolderLayer._numCoverImages
_OBJC_IVAR_$_BKSeriesFolderLayer._frontCoverRect
_OBJC_IVAR_$_BKSeriesFolderLayer._selectionRect
_OBJC_IVAR_$_BKSeriesFolderLayer._selectionMaskPath
_OBJC_IVAR_$_BKSeriesFolderLayer._backgroundLayer
_OBJC_IVAR_$_BKSeriesFolderLayer._shouldFadeInMasks
_OBJC_IVAR_$_BKSeriesFolderLayer._container
_OBJC_IVAR_$_AEAnnotationSerializationManager.bookMetadataProvider
_OBJC_IVAR_$_AESingleBookMetadataProvider.assetID
_OBJC_IVAR_$_AESingleBookMetadataProvider.assetURL
_OBJC_IVAR_$_AESingleBookMetadataProvider.bookVersionString
_OBJC_IVAR_$_AESingleBookMetadataProvider.pathToAssetContextDirectory
_OBJC_IVAR_$_AESingleBookMetadataProvider.managedBook
_OBJC_IVAR_$_SFUZipArchiveFileDataRepresentation.mFd
_OBJC_IVAR_$_SFUZipArchiveFileDataRepresentation.mFileRepresentation
_OBJC_IVAR_$_AEAnnotationBlockFilter._filterBlock
_OBJC_IVAR_$_AEAnnotationBlockFilter._concurrent
_OBJC_IVAR_$_AEAnnotationStringFilter._string
_OBJC_IVAR_$_AEAnnotationStringFilter._fields
_OBJC_IVAR_$_AEAnnotationStringFilter._options
_OBJC_IVAR_$_AEAnnotationStringFilter._predicateFilter
_OBJC_IVAR_$_AEUserPublishingLookUpRequest._request
_OBJC_IVAR_$_IMZipArchiveUtilities._delegate
_OBJC_IVAR_$_AEUserPublishing._cache
_OBJC_IVAR_$_AEUserPublishing._timeoutInterval
_OBJC_IVAR_$_AEUserPublishing._queue
_OBJC_IVAR_$_IMImageCacheObject._imageRefs
_OBJC_IVAR_$_IMImageCacheObject._imageSize
_OBJC_IVAR_$_IMImageCache._memoryCache
_OBJC_IVAR_$_IMImageCache._persistentCachePath
_OBJC_IVAR_$_IMImageCache._defaultType
_OBJC_IVAR_$_IMImageCache._downloadQueue
_OBJC_IVAR_$_IMMappedKeyDataStore._path
_OBJC_IVAR_$_IMMappedKeyDataStore._keyQueue
_OBJC_IVAR_$_IMMappedKeyDataStore._loadQueue
_OBJC_IVAR_$_IMMappedKeyDataStore._saveQueue
_OBJC_IVAR_$_IMMappedKeyDataStore._keys
_OBJC_IVAR_$__IMMemoryCacheItem._item
_OBJC_IVAR_$__IMMemoryCacheItem._cost
_OBJC_IVAR_$__IMMemoryCacheItem._keyString
_OBJC_IVAR_$__IMMemoryCacheItem._conformsToProtocol
_OBJC_IVAR_$__IMMemoryCacheItem._timeStamp
_OBJC_IVAR_$_IMMemoryCache._items
_OBJC_IVAR_$_IMMemoryCache._itemsArray
_OBJC_IVAR_$_IMMemoryCache._queue
_OBJC_IVAR_$_IMMemoryCache._accessQueue
_OBJC_IVAR_$_IMMemoryCache._lastCheckTime
_OBJC_IVAR_$_IMMemoryCache._totalCostLimit
_OBJC_IVAR_$_IMMemoryCache._count
_OBJC_IVAR_$_IMMemoryCache._totalCost
_OBJC_IVAR_$_IMMemoryCache._countLimit
_OBJC_IVAR_$_IMMemoryCache._name
_OBJC_IVAR_$_IMMemoryCache._delegate
_OBJC_IVAR_$_IMMemoryCache._evictsItemsWithDiscardedContent
_OBJC_IVAR_$_IMPersistentCache._maxSize
_OBJC_IVAR_$_IMPersistentCache._accessedIds
_OBJC_IVAR_$_IMPersistentCache._path
_OBJC_IVAR_$_IMPersistentCache._db
_OBJC_IVAR_$_IMPersistentCache._adminTable
_OBJC_IVAR_$_IMPersistentCache._cacheSize
_OBJC_IVAR_$_IMPersistentCache._unknownKeys
_OBJC_IVAR_$_IMPersistentCache._accessedIdsLock
_OBJC_IVAR_$_IMPersistentCache._unknownKeysLock
_OBJC_IVAR_$_IMPersistentCache._scanTimer
_OBJC_IVAR_$_IMPersistentCache._count
_OBJC_IVAR_$_SFUDataRepresentation.mHasHash
_OBJC_IVAR_$_SFUDataRepresentation.mHash
_OBJC_IVAR_$_SFUDataRepresentation.mHasSha1Hash
_OBJC_IVAR_$_SFUDataRepresentation.mSha1Hash
_OBJC_IVAR_$_IMDatabaseCursor._statement
_OBJC_IVAR_$_IMDatabaseCursor._numColumns
_OBJC_IVAR_$_IMDatabaseCursor._columnNames
_OBJC_IVAR_$_IMDatabaseCursor._columnTypes
_OBJC_IVAR_$_IMDatabaseCursor._results
_OBJC_IVAR_$_IMDatabaseCursor._closed
_OBJC_IVAR_$_IMBlockActivityItemProvider._resolutionBlock
_OBJC_IVAR_$_IMBlockActivityItemProvider._UTI
_OBJC_IVAR_$_IMBlockActivityItemProvider._supportedActivityTypes
_OBJC_IVAR_$_IMBlockActivityItemProvider._activityType
_OBJC_IVAR_$_AEAnnotationActivityItemProviderSource._annotations
_OBJC_IVAR_$_AEAnnotationActivityItemProviderSource._paginationDataSource
_OBJC_IVAR_$_AEAnnotationActivityItemProviderSource._citationsAllowed
_OBJC_IVAR_$_AEAnnotationHTMLActivityItemProvider._activityType
_OBJC_IVAR_$_AEAnnotationTextActivityItemProvider._activityType
_OBJC_IVAR_$_AEAnnotationGroupRTFActivityItemProvider._activityType
_OBJC_IVAR_$_SFUCryptoKey.mIterationCount
_OBJC_IVAR_$_SFUCryptoKey.mKeyLength
_OBJC_IVAR_$_SFUCryptoKey.mKey
_OBJC_IVAR_$_SFUCryptoKey._passphrase
_OBJC_IVAR_$_SFUCryptoKey.mSaltData
_OBJC_IVAR_$_SFUZipEntry.mArchiveDataRepresentation
_OBJC_IVAR_$_SFUZipEntry.mCrc
_OBJC_IVAR_$_SFUZipEntry.mCompressedSize
_OBJC_IVAR_$_SFUZipEntry.mUncompressedSize
_OBJC_IVAR_$_SFUZipEntry.mOffset
_OBJC_IVAR_$_SFUZipEntry.mCompressionMethod
_OBJC_IVAR_$_SFUZipEntry.mCryptoKey
_OBJC_IVAR_$_SFUZipEntry.mHasEncodedLength
_OBJC_IVAR_$_SFUZipEntry.mDataOffset
_OBJC_IVAR_$_SFUZipEntry.mHasDataOffset
_OBJC_IVAR_$_SFUZipEntry.mEncodedLength
_OBJC_IVAR_$_SFUCryptor.mCryptor
_OBJC_IVAR_$_SFUCryptor.mBlockSize
_OBJC_IVAR_$_SFUCryptor.mOperation
_OBJC_IVAR_$_SFUCryptor.mOutputBuffer
_OBJC_IVAR_$_SFUCryptor.mOutputBufferPos
_OBJC_IVAR_$_SFUCryptor.mDecryptionInputBuffer
_OBJC_IVAR_$_SFUCryptor.mOutputBufferAvailable
_OBJC_IVAR_$_SFUCryptor.mFinished
_OBJC_IVAR_$_SFUZipArchive.mEntries
_OBJC_IVAR_$_SFUZipArchive.mDataRepresentation
_OBJC_IVAR_$_SFUZipArchive.mPassphraseVerifier
_OBJC_IVAR_$_SFUZipArchive.mPassphraseHint
_OBJC_IVAR_$_SFUZipArchive.mEncryptedDocumentUuid
_OBJC_IVAR_$_SFUZipArchive.mCryptoKey
_OBJC_IVAR_$_SFUZipRecordInputStream.mInput
_OBJC_IVAR_$_SFUZipRecordInputStream.mBufferStart
_OBJC_IVAR_$_SFUZipRecordInputStream.mBufferEnd
_OBJC_IVAR_$_SFUZipRecordInputStream.mBuffer
_OBJC_IVAR_$_IMCommonCoreAccessibility._accessibilitySupportLoaded
_OBJC_IVAR_$_BKAssetActivityPropertySource._asset
_OBJC_IVAR_$_BKSeriesInfo._infoDictionary
+[IMUserAgent _getSystemVersionMajor:minor:bugfix:].mMajor
+[IMUserAgent _getSystemVersionMajor:minor:bugfix:].mMinor
_SFUCGDataProviderCallbacks
+[NSData(Base64) dataWithBase64EncodedString:].decodingTable
+[IMPlugInManager defaultManager].sPredicate
+[IMPlugInManager defaultManager].sPlugInManager
+[IMUserAgent _getSystemVersionMajor:minor:bugfix:].mBugfix
+[IMUserAgent _getSystemVersionMajor:minor:bugfix:].onceToken
+[IMUserAgent _macOSXVersionString].versionString
+[IMUserAgent _macOSXVersionString].onceToken
+[IMUserAgent _userVisibleWebKitVersionString].sUserVisibleWebKitVersionString
+[IMUserAgent _userVisibleWebKitVersionString].onceToken
+[IMUserAgent _macOSXBuildString].build
+[IMUserAgent _macOSXBuildString].onceToken
+[IMPlatformAbstraction defaultPlatformAbstraction].sPredicate
+[IMPlatformAbstraction defaultPlatformAbstraction].sDefaultPlatformAbstraction
__sharedLogger
_timeBase
-[NSString(AEAnnotationExtras) flattenedAnnotationString].annotationExclusionSet
-[NSString(AEAnnotationExtras) flattenedAnnotationString].onceToken
+[NSFont(IMAdditions) im_safeFontWithName:size:].__logOnceSet
+[NSFont(IMAdditions) im_safeFontWithName:size:].onceToken
___ubiquityQueue
+[IMUbiquitousDataProvider ubiquityDebug].__ubiquityDebug
+[IMUbiquitousDataProvider ubiquityDebug].__checked
+[BKSeriesManager sharedManager].manager
+[BKSeriesManager sharedManager].onceToken
+[AEAnnotationTheme(ThemeDescriptions) themeDescriptions].onceToken
+[AEAnnotationTheme(ThemeDescriptions) themeDescriptions].themeDescriptions
-[AEAnnotationThemeGreen noteFillColor].onceToken
-[AEAnnotationThemeGreen noteFillColor].color
-[AEAnnotationThemeGreen noteFillColor].onceToken94
-[AEAnnotationThemeGreen noteFillColor].color95
-[AEAnnotationThemeGreen noteBorderColor].onceToken
-[AEAnnotationThemeGreen noteBorderColor].color
-[AEAnnotationThemeGreen noteBorderColor].onceToken103
-[AEAnnotationThemeGreen noteBorderColor].color104
-[AEAnnotationThemeGreen noteTextColor].onceToken
-[AEAnnotationThemeGreen noteTextColor].color
-[AEAnnotationThemeGreen noteTextColor].onceToken112
-[AEAnnotationThemeGreen noteTextColor].color113
-[AEAnnotationThemeGreen highlightColor].onceToken
-[AEAnnotationThemeGreen highlightColor].color
-[AEAnnotationThemeGreen highlightColor].onceToken121
-[AEAnnotationThemeGreen highlightColor].color122
-[AEAnnotationThemeGreen noteMarkerFillColor].onceToken
-[AEAnnotationThemeGreen noteMarkerFillColor].color
-[AEAnnotationThemeGreen noteMarkerFillColor].onceToken130
-[AEAnnotationThemeGreen noteMarkerFillColor].color131
-[AEAnnotationThemeGreen noteMarkerBorderColor].onceToken
-[AEAnnotationThemeGreen noteMarkerBorderColor].color
-[AEAnnotationThemeGreen noteMarkerBorderColor].onceToken139
-[AEAnnotationThemeGreen noteMarkerBorderColor].color140
-[AEAnnotationThemeGreen notesSidebarBarColor].onceToken
-[AEAnnotationThemeGreen notesSidebarBarColor].color
-[AEAnnotationThemeGreen notesSidebarBarColor].onceToken148
-[AEAnnotationThemeGreen notesSidebarBarColor].color149
-[AEAnnotationThemeGreen isUnderline].onceToken
-[AEAnnotationThemeGreen isUnderline].value
-[AEAnnotationThemeBlue noteFillColor].onceToken
-[AEAnnotationThemeBlue noteFillColor].color
-[AEAnnotationThemeBlue noteFillColor].onceToken173
-[AEAnnotationThemeBlue noteFillColor].color174
-[AEAnnotationThemeBlue noteBorderColor].onceToken
-[AEAnnotationThemeBlue noteBorderColor].color
-[AEAnnotationThemeBlue noteBorderColor].onceToken182
-[AEAnnotationThemeBlue noteBorderColor].color183
-[AEAnnotationThemeBlue noteTextColor].onceToken
-[AEAnnotationThemeBlue noteTextColor].color
-[AEAnnotationThemeBlue noteTextColor].onceToken191
-[AEAnnotationThemeBlue noteTextColor].color192
-[AEAnnotationThemeBlue highlightColor].onceToken
-[AEAnnotationThemeBlue highlightColor].color
-[AEAnnotationThemeBlue highlightColor].onceToken200
-[AEAnnotationThemeBlue highlightColor].color201
-[AEAnnotationThemeBlue noteMarkerFillColor].onceToken
-[AEAnnotationThemeBlue noteMarkerFillColor].color
-[AEAnnotationThemeBlue noteMarkerFillColor].onceToken209
-[AEAnnotationThemeBlue noteMarkerFillColor].color210
-[AEAnnotationThemeBlue noteMarkerBorderColor].onceToken
-[AEAnnotationThemeBlue noteMarkerBorderColor].color
-[AEAnnotationThemeBlue noteMarkerBorderColor].onceToken218
-[AEAnnotationThemeBlue noteMarkerBorderColor].color219
-[AEAnnotationThemeBlue notesSidebarBarColor].onceToken
-[AEAnnotationThemeBlue notesSidebarBarColor].color
-[AEAnnotationThemeBlue notesSidebarBarColor].onceToken227
-[AEAnnotationThemeBlue notesSidebarBarColor].color228
-[AEAnnotationThemeBlue isUnderline].onceToken
-[AEAnnotationThemeBlue isUnderline].value
-[AEAnnotationThemeYellow noteFillColor].onceToken
-[AEAnnotationThemeYellow noteFillColor].color
-[AEAnnotationThemeYellow noteFillColor].onceToken240
-[AEAnnotationThemeYellow noteFillColor].color241
-[AEAnnotationThemeYellow noteBorderColor].onceToken
-[AEAnnotationThemeYellow noteBorderColor].color
-[AEAnnotationThemeYellow noteBorderColor].onceToken249
-[AEAnnotationThemeYellow noteBorderColor].color250
-[AEAnnotationThemeYellow noteTextColor].onceToken
-[AEAnnotationThemeYellow noteTextColor].color
-[AEAnnotationThemeYellow noteTextColor].onceToken258
-[AEAnnotationThemeYellow noteTextColor].color259
-[AEAnnotationThemeYellow highlightColor].onceToken
-[AEAnnotationThemeYellow highlightColor].color
-[AEAnnotationThemeYellow highlightColor].onceToken267
-[AEAnnotationThemeYellow highlightColor].color268
-[AEAnnotationThemeYellow noteMarkerFillColor].onceToken
-[AEAnnotationThemeYellow noteMarkerFillColor].color
-[AEAnnotationThemeYellow noteMarkerFillColor].onceToken276
-[AEAnnotationThemeYellow noteMarkerFillColor].color277
-[AEAnnotationThemeYellow noteMarkerBorderColor].onceToken
-[AEAnnotationThemeYellow noteMarkerBorderColor].color
-[AEAnnotationThemeYellow noteMarkerBorderColor].onceToken285
-[AEAnnotationThemeYellow noteMarkerBorderColor].color286
-[AEAnnotationThemeYellow notesSidebarBarColor].onceToken
-[AEAnnotationThemeYellow notesSidebarBarColor].color
-[AEAnnotationThemeYellow notesSidebarBarColor].onceToken294
-[AEAnnotationThemeYellow notesSidebarBarColor].color295
-[AEAnnotationThemeYellow isUnderline].onceToken
-[AEAnnotationThemeYellow isUnderline].value
-[AEAnnotationThemePurple noteFillColor].onceToken
-[AEAnnotationThemePurple noteFillColor].color
-[AEAnnotationThemePurple noteFillColor].onceToken307
-[AEAnnotationThemePurple noteFillColor].color308
-[AEAnnotationThemePurple noteBorderColor].onceToken
-[AEAnnotationThemePurple noteBorderColor].color
-[AEAnnotationThemePurple noteBorderColor].onceToken316
-[AEAnnotationThemePurple noteBorderColor].color317
-[AEAnnotationThemePurple noteTextColor].onceToken
-[AEAnnotationThemePurple noteTextColor].color
-[AEAnnotationThemePurple noteTextColor].onceToken325
-[AEAnnotationThemePurple noteTextColor].color326
-[AEAnnotationThemePurple highlightColor].onceToken
-[AEAnnotationThemePurple highlightColor].color
-[AEAnnotationThemePurple highlightColor].onceToken334
-[AEAnnotationThemePurple highlightColor].color335
-[AEAnnotationThemePurple noteMarkerFillColor].onceToken
-[AEAnnotationThemePurple noteMarkerFillColor].color
-[AEAnnotationThemePurple noteMarkerFillColor].onceToken343
-[AEAnnotationThemePurple noteMarkerFillColor].color344
-[AEAnnotationThemePurple noteMarkerBorderColor].onceToken
-[AEAnnotationThemePurple noteMarkerBorderColor].color
-[AEAnnotationThemePurple noteMarkerBorderColor].onceToken352
-[AEAnnotationThemePurple noteMarkerBorderColor].color353
-[AEAnnotationThemePurple notesSidebarBarColor].onceToken
-[AEAnnotationThemePurple notesSidebarBarColor].color
-[AEAnnotationThemePurple notesSidebarBarColor].onceToken361
-[AEAnnotationThemePurple notesSidebarBarColor].color362
-[AEAnnotationThemePurple isUnderline].onceToken
-[AEAnnotationThemePurple isUnderline].value
-[AEAnnotationThemePink noteFillColor].onceToken
-[AEAnnotationThemePink noteFillColor].color
-[AEAnnotationThemePink noteFillColor].onceToken374
-[AEAnnotationThemePink noteFillColor].color375
-[AEAnnotationThemePink noteBorderColor].onceToken
-[AEAnnotationThemePink noteBorderColor].color
-[AEAnnotationThemePink noteBorderColor].onceToken383
-[AEAnnotationThemePink noteBorderColor].color384
-[AEAnnotationThemePink noteTextColor].onceToken
-[AEAnnotationThemePink noteTextColor].color
-[AEAnnotationThemePink noteTextColor].onceToken392
-[AEAnnotationThemePink noteTextColor].color393
-[AEAnnotationThemePink highlightColor].onceToken
-[AEAnnotationThemePink highlightColor].color
-[AEAnnotationThemePink highlightColor].onceToken401
-[AEAnnotationThemePink highlightColor].color402
-[AEAnnotationThemePink noteMarkerFillColor].onceToken
-[AEAnnotationThemePink noteMarkerFillColor].color
-[AEAnnotationThemePink noteMarkerFillColor].onceToken410
-[AEAnnotationThemePink noteMarkerFillColor].color411
-[AEAnnotationThemePink noteMarkerBorderColor].onceToken
-[AEAnnotationThemePink noteMarkerBorderColor].color
-[AEAnnotationThemePink noteMarkerBorderColor].onceToken419
-[AEAnnotationThemePink noteMarkerBorderColor].color420
-[AEAnnotationThemePink notesSidebarBarColor].onceToken
-[AEAnnotationThemePink notesSidebarBarColor].color
-[AEAnnotationThemePink notesSidebarBarColor].onceToken428
-[AEAnnotationThemePink notesSidebarBarColor].color429
-[AEAnnotationThemePink isUnderline].onceToken
-[AEAnnotationThemePink isUnderline].value
-[AEAnnotationThemeUnderline noteFillColor].onceToken
-[AEAnnotationThemeUnderline noteFillColor].color
-[AEAnnotationThemeUnderline noteFillColor].onceToken441
-[AEAnnotationThemeUnderline noteFillColor].color442
-[AEAnnotationThemeUnderline noteBorderColor].onceToken
-[AEAnnotationThemeUnderline noteBorderColor].color
-[AEAnnotationThemeUnderline noteBorderColor].onceToken450
-[AEAnnotationThemeUnderline noteBorderColor].color451
-[AEAnnotationThemeUnderline noteTextColor].onceToken
-[AEAnnotationThemeUnderline noteTextColor].color
-[AEAnnotationThemeUnderline noteTextColor].onceToken459
-[AEAnnotationThemeUnderline noteTextColor].color460
-[AEAnnotationThemeUnderline highlightColor].onceToken
-[AEAnnotationThemeUnderline highlightColor].color
-[AEAnnotationThemeUnderline highlightColor].onceToken468
-[AEAnnotationThemeUnderline highlightColor].color469
-[AEAnnotationThemeUnderline noteMarkerFillColor].onceToken
-[AEAnnotationThemeUnderline noteMarkerFillColor].color
-[AEAnnotationThemeUnderline noteMarkerFillColor].onceToken477
-[AEAnnotationThemeUnderline noteMarkerFillColor].color478
-[AEAnnotationThemeUnderline noteMarkerBorderColor].onceToken
-[AEAnnotationThemeUnderline noteMarkerBorderColor].color
-[AEAnnotationThemeUnderline noteMarkerBorderColor].onceToken486
-[AEAnnotationThemeUnderline noteMarkerBorderColor].color487
-[AEAnnotationThemeUnderline notesSidebarBarColor].onceToken
-[AEAnnotationThemeUnderline notesSidebarBarColor].color
-[AEAnnotationThemeUnderline notesSidebarBarColor].onceToken495
-[AEAnnotationThemeUnderline notesSidebarBarColor].color496
-[AEAnnotationThemeUnderline isUnderline].onceToken
-[AEAnnotationThemeUnderline isUnderline].value
-[AEAnnotationTheme noteMarkerStrikethroughColor].onceToken
-[AEAnnotationTheme noteMarkerStrikethroughColor].color
-[AEAnnotationTheme notesSidebarTextColor].onceToken
-[AEAnnotationTheme notesSidebarTextColor].color
+[AEAnnotationTheme greenTheme:].onceToken
+[AEAnnotationTheme greenTheme:].theme
+[AEAnnotationTheme greenTheme:].onceToken537
+[AEAnnotationTheme greenTheme:].theme538
+[AEAnnotationTheme blueTheme:].onceToken
+[AEAnnotationTheme blueTheme:].theme
+[AEAnnotationTheme blueTheme:].onceToken544
+[AEAnnotationTheme blueTheme:].theme545
+[AEAnnotationTheme yellowTheme:].onceToken
+[AEAnnotationTheme yellowTheme:].theme
+[AEAnnotationTheme yellowTheme:].onceToken551
+[AEAnnotationTheme yellowTheme:].theme552
+[AEAnnotationTheme pinkTheme:].onceToken
+[AEAnnotationTheme pinkTheme:].theme
+[AEAnnotationTheme pinkTheme:].onceToken558
+[AEAnnotationTheme pinkTheme:].theme559
+[AEAnnotationTheme purpleTheme:].onceToken
+[AEAnnotationTheme purpleTheme:].theme
+[AEAnnotationTheme purpleTheme:].onceToken565
+[AEAnnotationTheme purpleTheme:].theme566
+[AEAnnotationTheme underlineTheme:].onceToken
+[AEAnnotationTheme underlineTheme:].theme
+[AEAnnotationTheme underlineTheme:].onceToken572
+[AEAnnotationTheme underlineTheme:].theme573
+[AEAnnotationTheme highlightTextColor:].onceToken
+[AEAnnotationTheme highlightTextColor:].color
+[AEAnnotationTheme highlightTextColor:].onceToken592
+[AEAnnotationTheme highlightTextColor:].color593
-[AEAnnotationTheme noteShadowRadius].onceToken
-[AEAnnotationTheme noteShadowRadius].radius
-[AEAnnotationTheme noteShadowOpacity].onceToken
-[AEAnnotationTheme noteShadowOpacity].opacity
-[AEAnnotationTheme noteShadowColor].onceToken
-[AEAnnotationTheme noteShadowColor].color
-[AEAnnotationTheme noteShadowOffset].onceToken
-[AEAnnotationTheme noteShadowOffset].size.0
-[AEAnnotationTheme noteShadowOffset].size.1
-[AEAnnotationTheme noteTextFont].onceToken
-[AEAnnotationTheme noteTextFont].font
-[AEAnnotationTheme noteTextFontInTable].onceToken
-[AEAnnotationTheme noteTextFontInTable].font
+[IMDevice currentDevice].sCurrentDevice
+[IMDevice currentDevice].sPredicate
-[IMDevice numberOfCPUCores].sNumberOfCores
-[IMDevice numberOfCPUCores].sPredicate
-[IMDevice trackPadScrollDirectionIsNatural].sIsNatural
-[IMDevice trackPadScrollDirectionIsNatural].sPredicate
+[IMLibraryPlist languageFromPlistEntry:].onceToken
+[IMLibraryPlist languageFromPlistEntry:].nameToCode
_gBookFormatByExtensionCB
__ZZ59-[NSString(NSURLAdditionsAdditions) containsPercentEscapes]E6hexSet
__ZGVZ59-[NSString(NSURLAdditionsAdditions) containsPercentEscapes]E6hexSet
__callbackBlock
+[AEUserPublishing sharedInstance].__sharedInstance
+[AEUserPublishing sharedInstance].onceToken
+[IMImageCache defaultCache].onceToken
+[IMImageCache defaultCache]._sharedCache
_IMCommonCoreBundle.sIMCommonCoreBundle
_IMCommonCoreBundle.onceToken
+[IMPersistentCacheManager sharedInstance].__s_pcmSharedInstance
+[IMPersistentCacheManager sharedInstance].sPredicate
+[NSURL(IMAdditions) supportediBooksURLSchemes].sSupportedURLSchemes
+[NSURL(IMAdditions) supportediBooksURLSchemes].onceToken
+[NSURL(IMAdditions) supportediBooksStoreURLSchemes].sSupportedStoreURLSchemes
+[NSURL(IMAdditions) supportediBooksStoreURLSchemes].onceToken
_isK48.onceToken
_isK48.result
_isN18.onceToken
_isN18.result
_isN88.onceToken
_isN88.result
_isMulticore.onceToken
_isMulticore.result
_deviceVersion.onceToken
+[IMCommonCoreAccessibility sharedInstance]._IMCommonCoreAccessibilitySharedInstance
+[IMCommonCoreAccessibility sharedInstance]._IMCommonCoreAccessibilitySharedInstanceOnceToken
_IMAccessibilityShouldPerformValidationChecks._IMAccessibilityShouldPerformValidationChecks
_IMAccessibilityShouldPerformValidationChecks._IMAccessibilityShouldPerformValidationChecksOnceToken
_IMAccessibilityShouldCrashOnValidationError._IMAccessibilityShouldCrashOnValidationError
_IMAccessibilityShouldCrashOnValidationError._IMAccessibilityShouldCrashOnValidationErrorOnceToken
_IMAccessibilityShouldCrashOnValidationErrorAfterLaunch._IMAccessibilityShouldCrashOnValidationErrorAfterLaunch
_IMAccessibilityShouldCrashOnValidationErrorAfterLaunch._IMAccessibilityShouldCrashOnValidationErrorAfterLaunchOnceToken
___IMAccessibilityHandleValidationErrorWithDescription._IMAccessibilityValidationCrashOnceToken
+[Reachability sharedReachabilityForInternetConnection].sReachability
+[Reachability sharedReachabilityForInternetConnection].onceToken
_IMBloomFilterStringHashProvider.__im_lazy_init_variable
_IMBloomFilterStringHashProvider.__im_lazy_init_predicate
_IMBloomFilterInt64HashProvider.__im_lazy_init_variable
_IMBloomFilterInt64HashProvider.__im_lazy_init_predicate
_IMBloomFilterCharacterHashProvider.__im_lazy_init_variable
_IMBloomFilterCharacterHashProvider.__im_lazy_init_predicate
_AEAnnotationMaxRepresentativeTextLength
_AEAnnotationProviderDatabaseVersion
_AEUserPublishingErrorCodeRequestDisabled
_AEUserPublishingErrorDomain
_BKEpubAnnotationBodyRectsKey
_BKEpubAnnotationBodyThemeIsHoveredKey
_BKEpubAnnotationBodyThemeIsInvertedKey
_BKEpubAnnotationBodyThemeIsUnderlineKey
_BKEpubAnnotationBodyThemeStyleKey
_BKEpubWebProcessPlugInMessageBloomFilterTask
_BKEpubWebProcessPlugInMessagePageTask
_BKEpubWebProcessPlugInMessageResourceLoadTask
_BKEpubWebProcessPlugInMessageSearchContextTask
_BKEpubWebProcessPlugInMessageSnapshotData
_BKEpubWebProcessPlugInMessageSnapshotSize
_BKEpubWebProcessPlugInMessageSnapshotTask
_BKEpubWebProcessPlugInMessageSnapshotViewportOnly
_BKEpubWebProcessPlugInMessageUpdateBookInfo
_BKEpubWebProcessPlugInObjectBloomFilter
_BKEpubWebProcessPlugInObjectContextArray
_BKEpubWebProcessPlugInObjectDocumentIndex
_BKEpubWebProcessPlugInObjectSearchString
_BKSeriesFolderCoverSizeInterval
_BKSeriesFolderMaxItemsAllowed
_BKSeriesFolderSecondCoverOpacity
_BKSeriesFolderThirdCoverOpacity
_BKSeriesItemAdamIDKey
_BKSeriesItemAuthorKey
_BKSeriesItemIsExplicitKey
_BKSeriesItemPopularityKey
_BKSeriesItemSequenceNumberKey
_BKSeriesItemSeriesIDKey
_BKSeriesItemTitleKey
_BKSeriesManagerUpdatesSeriesNotificationName
_BKSeriesManagerUpdatesSeriesNotificationUserInfoAdamIDsAddedKey
_BKSeriesManagerUpdatesSeriesNotificationUserInfoAdamIDsRemovedKey
_BKSeriesManagerUpdatesSeriesNotificationUserInfoAdamIDsUpdatedKey
_BookFormatByExtension
_BookFormatByFilePath
_CFStringCompareFlagsForSearch
_CFStringCopyFlattenedForSearch
_CFStringCopyLongestWordInString
_CGBitmapContextCreateWithImage
_CGContextDrawStretchableImage
_CGImageCreateFromImageAdjustingHSL
_CGImageCreateFromPDFPage
_CGImageCreateWithURL
_CGPointAdd
_CGPointAddSize
_CGPointDistanceFromPoint
_CGPointMultiply
_CGPointMultiplyByPoint
_CGPointSquaredDistanceFromPoint
_CGPointSubtract
_CGPointSubtractSize
_CGRectAlmostEqualToRect
_CGRectCenterRectInRect
_CGRectEdgePointAtAngle
_CGRectFitRectInRect
_CGRectFitRectInRectClip
_CGRectFitRectInRectNoRounding
_CGRectGetCenter
_CGRectGetCenterNoRounding
_CGRectMakeWithCenterAndSize
_CGRectMakeWithOriginSize
_CGRectMakeWithSize
_CGRectMultiply
_CGSizeMakeEvenSize
_CGSizeMin
_CGSizeMultiplyByPoint
_CGSizeRotate
_CGSizeRound
_CGSizeScale
_CGSizeScaleThatFillsInCGSize
_CGSizeScaleThatFitsInCGSize
_CGSizeScaledToFillInSize
_CGSizeScaledToFitInSize
_GetBookFormatByExtensionCB
_IMAccessibilityInstallSafeCategories
_IMAccessibilityInstallSafeCategory
_IMAccessibilityPerformBlockAsynchronouslyOnMainThread
_IMAccessibilityPerformBlockOnMainThread
_IMAccessibilityPerformBlockOnMainThreadAfterDelay
_IMAccessibilityShouldCrashOnValidationError
_IMAccessibilityShouldCrashOnValidationErrorAfterLaunch
_IMAccessibilityShouldPerformValidationChecks
_IMActivityTypeAssignToContact
_IMActivityTypeCopyToPasteboard
_IMActivityTypeMail
_IMActivityTypeMessage
_IMActivityTypePostToFacebook
_IMActivityTypePostToTwitter
_IMActivityTypePostToWeibo
_IMActivityTypePrint
_IMActivityTypeSaveToCameraRoll
_IMAssertionFailed
_IMAssetViewerDelegateErrorCodeNotStoreAsset
_IMAssetViewerDelegateErrorDomain
_IMBitmapGetAlignedBytesPerRow
_IMBloomFilterCharacterHashProvider
_IMBloomFilterInt64HashProvider
_IMBloomFilterStringHashProvider
_IMCFTypeCast
_IMClassAndProtocolCast
_IMCommonCoreAccessibilityLocalizedString
_IMCommonCoreBundle
_IMCoreDataObjectIDKey
_IMCreateRGBABitmapContext
_IMDegreeToRadian
_IMDynamicCast
_IMGraphicsContextWithOptions
_IMIntersectionSize
_IMLogFilter
_IMLogRuntimeOverride
_IMLogRuntimeOverridePattern
_IMProtocolCast
_IMRadianToDegree
_IMReachabilityErrorDomain
_IMRectContainsPointAllEdgesInclusive
_IMRectContainsPointEdgesInclusive
_IMRectWithMaxX
_IMRectWithMaxY
_IMRectWithMinX
_IMRectWithMinY
_IMTimeStamp
_IMUnionRect
_IMUserAgentHTTPHeaderKey
_IMUserAgentSystemVersionPlistPath
_IMWithAccessToCharacters
_IM_SSLookupPropertyArtwork
_IM_SSLookupPropertyChildren
_IM_SSLookupPropertyContentRating
_IM_SSLookupPropertyContentRatingName
_IM_SSLookupPropertyContentRatingNameExplicit
_IM_SSLookupPropertyContentRatingValue
_IM_SSLookupPropertyHeight
_IM_SSLookupPropertyKind
_IM_SSLookupPropertyKindEpubEbookSeries
_IM_SSLookupPropertyShortURL
_IM_SSLookupPropertyTellAFriendMessageContentsUrl
_IM_SSLookupPropertyURL
_IM_SSLookupPropertyWidth
_OBJC_CLASS_$_AEAnnotation
_OBJC_CLASS_$_AEAnnotationAccessibility
_OBJC_CLASS_$_AEAnnotationActivityItemProviderSource
_OBJC_CLASS_$_AEAnnotationBlockFilter
_OBJC_CLASS_$_AEAnnotationFacebookActivityItemProvider
_OBJC_CLASS_$_AEAnnotationGroupHTMLActivityItemProvider
_OBJC_CLASS_$_AEAnnotationGroupHTMLGenerator
_OBJC_CLASS_$_AEAnnotationGroupPrintActivityItemProvider
_OBJC_CLASS_$_AEAnnotationGroupRTFActivityItemProvider
_OBJC_CLASS_$_AEAnnotationGroupRTFGenerator
_OBJC_CLASS_$_AEAnnotationHTMLActivityItemProvider
_OBJC_CLASS_$_AEAnnotationManagedObjectContext
_OBJC_CLASS_$_AEAnnotationPredicateFilter
_OBJC_CLASS_$_AEAnnotationPrintActivityItemProvider
_OBJC_CLASS_$_AEAnnotationProvider
_OBJC_CLASS_$_AEAnnotationSerializationManager
_OBJC_CLASS_$_AEAnnotationSocialActivityItemProvider
_OBJC_CLASS_$_AEAnnotationStringFilter
_OBJC_CLASS_$_AEAnnotationTextActivityItemProvider
_OBJC_CLASS_$_AEAnnotationTheme
_OBJC_CLASS_$_AEAnnotationThemeBlue
_OBJC_CLASS_$_AEAnnotationThemeGreen
_OBJC_CLASS_$_AEAnnotationThemePink
_OBJC_CLASS_$_AEAnnotationThemePurple
_OBJC_CLASS_$_AEAnnotationThemeUnderline
_OBJC_CLASS_$_AEAnnotationThemeYellow
_OBJC_CLASS_$_AEAnnotationTwitterWeiboActivityItemProvider
_OBJC_CLASS_$_AEAssetActivityItemProvider
_OBJC_CLASS_$_AEAssetActivityItemProviderSource
_OBJC_CLASS_$_AEAssetAttachmentActivityItemProvider
_OBJC_CLASS_$_AEAssetFacebookActivityItemProvider
_OBJC_CLASS_$_AEAssetHTMLActivityItemProvider
_OBJC_CLASS_$_AEAssetHTMLGenerator
_OBJC_CLASS_$_AEAssetMailActivityItemProvider
_OBJC_CLASS_$_AEAssetTextActivityItemProvider
_OBJC_CLASS_$_AEAssetTwitterWeiboActivityItemProvider
_OBJC_CLASS_$_AESingleAnnotationHTMLGenerator
_OBJC_CLASS_$_AESingleBookMetadataProvider
_OBJC_CLASS_$_AEUserPublishing
_OBJC_CLASS_$_AEUserPublishingLookUpRequest
_OBJC_CLASS_$_AEUserPublishingProductProfile
_OBJC_CLASS_$_BKAssetActivityPropertySource
_OBJC_CLASS_$_BKAssetUtilities
_OBJC_CLASS_$_BKSeriesCheck
_OBJC_CLASS_$_BKSeriesDatabase
_OBJC_CLASS_$_BKSeriesDatabaseManagedObjectContext
_OBJC_CLASS_$_BKSeriesFolderLayer
_OBJC_CLASS_$_BKSeriesInfo
_OBJC_CLASS_$_BKSeriesItem
_OBJC_CLASS_$_BKSeriesManager
_OBJC_CLASS_$_BKSeriesManagerUpdater
_OBJC_CLASS_$_IMAccessibilitySafeCategory
_OBJC_CLASS_$_IMActivityController
_OBJC_CLASS_$_IMAdminTable
_OBJC_CLASS_$_IMAssertionHandler
_OBJC_CLASS_$_IMAssetViewerPlugInInstanceDescriptor
_OBJC_CLASS_$_IMBlockActivityItemProvider
_OBJC_CLASS_$_IMBloomFilter
_OBJC_CLASS_$_IMCommonCoreAccessibility
_OBJC_CLASS_$_IMCommonCoreBundleLookupClass
_OBJC_CLASS_$_IMCoreDataSource
_OBJC_CLASS_$_IMDatabaseCursor
_OBJC_CLASS_$_IMDatabaseHandle
_OBJC_CLASS_$_IMDevice
_OBJC_CLASS_$_IMDocumentFragmentFilter
_OBJC_CLASS_$_IMGraphicsUtilities
_OBJC_CLASS_$_IMImageCache
_OBJC_CLASS_$_IMImageCacheObject
_OBJC_CLASS_$_IMJPEGPrefetch
_OBJC_CLASS_$_IMLanguageUtilities
_OBJC_CLASS_$_IMLibraryFragmentFilter
_OBJC_CLASS_$_IMLibraryPlist
_OBJC_CLASS_$_IMLogger
_OBJC_CLASS_$_IMMappedKeyDataStore
_OBJC_CLASS_$_IMMemoryCache
_OBJC_CLASS_$_IMPersistentCache
_OBJC_CLASS_$_IMPersistentCacheManager
_OBJC_CLASS_$_IMPlatformAbstraction
_OBJC_CLASS_$_IMPlugInDescriptor
_OBJC_CLASS_$_IMPlugInInstanceDescriptor
_OBJC_CLASS_$_IMPlugInManager
_OBJC_CLASS_$_IMStopWatch
_OBJC_CLASS_$_IMUbiquitousDataProvider
_OBJC_CLASS_$_IMUbiquitousPersistentStoreLoader
_OBJC_CLASS_$_IMUserAgent
_OBJC_CLASS_$_IMUserDataCull
_OBJC_CLASS_$_IMZipArchiveUtilities
_OBJC_CLASS_$_Reachability
_OBJC_CLASS_$_SFUBufferedInputStream
_OBJC_CLASS_$_SFUCryptoInputStream
_OBJC_CLASS_$_SFUCryptoKey
_OBJC_CLASS_$_SFUCryptoOutputStream
_OBJC_CLASS_$_SFUCryptoUtils
_OBJC_CLASS_$_SFUCryptor
_OBJC_CLASS_$_SFUDataRepresentation
_OBJC_CLASS_$_SFUFileDataRepresentation
_OBJC_CLASS_$_SFUFileInputStream
_OBJC_CLASS_$_SFUFileOutputStream
_OBJC_CLASS_$_SFUMemoryInputStream
_OBJC_CLASS_$_SFUMemoryOutputStream
_OBJC_CLASS_$_SFUMoveableFileOutputStream
_OBJC_CLASS_$_SFUOffsetInputStream
_OBJC_CLASS_$_SFUOffsetOutputStream
_OBJC_CLASS_$_SFUZipArchive
_OBJC_CLASS_$_SFUZipArchiveFileDataRepresentation
_OBJC_CLASS_$_SFUZipArchiveMemoryDataRepresentation
_OBJC_CLASS_$_SFUZipArchiveOutputStream
_OBJC_CLASS_$_SFUZipDeflateOutputStream
_OBJC_CLASS_$_SFUZipEntry
_OBJC_CLASS_$_SFUZipException
_OBJC_CLASS_$_SFUZipFreeSpaceEntry
_OBJC_CLASS_$_SFUZipInflateInputStream
_OBJC_CLASS_$_SFUZipOutputEntry
_OBJC_CLASS_$_SFUZipRecordInputStream
_OBJC_CLASS_$__IMMemoryCacheItem
_OBJC_CLASS_$___AEAnnotationAccessibility_super
_OBJC_CLASS_$___IMAccessibilityValidateBlockSignatureSentinel
_OBJC_CLASS_$___IMAccessibilityVerboseTypeEncodingGroup
_OBJC_EHTYPE_$_SFUZipException
_OBJC_IVAR_$_IMAdminTable._db
_OBJC_IVAR_$_IMBloomFilter._bitVector
_OBJC_IVAR_$_IMBloomFilter._hashProvider
_OBJC_IVAR_$_IMBloomFilter._specification
_OBJC_IVAR_$_IMDatabaseHandle._accessQueue
_OBJC_IVAR_$_IMDatabaseHandle._databaseHandle
_OBJC_IVAR_$_IMDatabaseHandle._statementCache
_OBJC_IVAR_$_IMDocumentFragmentFilter._filter
_OBJC_IVAR_$_IMDocumentFragmentFilter._specification
_OBJC_IVAR_$_IMLibraryFragmentFilter._identifiedDocuments
_OBJC_IVAR_$_IMLibraryFragmentFilter._specification
_OBJC_IVAR_$_IMLibraryPlist._directory
_OBJC_IVAR_$_IMLibraryPlist._path
_OBJC_IVAR_$_IMLogger._auxPath
_OBJC_IVAR_$_IMLogger._fileHandle
_OBJC_IVAR_$_IMLogger._filter
_OBJC_IVAR_$_IMLogger._logTofileOnly
_OBJC_IVAR_$_IMLogger._pid
_OBJC_IVAR_$_IMLogger._procName
_OBJC_IVAR_$_IMLogger._runtimeOverride
_OBJC_IVAR_$_IMPersistentCacheManager._accessQueue
_OBJC_IVAR_$_IMPersistentCacheManager._caches
_OBJC_IVAR_$_IMPersistentCacheManager._excludedCachesForCleanup
_OBJC_IVAR_$_IMPersistentCacheManager._pathRequestCount
_OBJC_IVAR_$_IMPlugInDescriptor._bundle
_OBJC_IVAR_$_IMPlugInDescriptor._bundlePath
_OBJC_IVAR_$_IMPlugInDescriptor._plugInClass
_OBJC_IVAR_$_IMPlugInDescriptor._plugInDescription
_OBJC_IVAR_$_IMPlugInInstanceDescriptor._instanceDescription
_OBJC_IVAR_$_IMPlugInInstanceDescriptor._plugInDescriptor
_OBJC_IVAR_$_IMPlugInManager._pluginDescriptors
_OBJC_IVAR_$_IMPlugInManager._wrPlugInInstances
_OBJC_IVAR_$_Reachability.localWiFiRef
_OBJC_IVAR_$_Reachability.reachabilityRef
_OBJC_IVAR_$_SFUCryptoInputStream.mBaseStream
_OBJC_IVAR_$_SFUCryptoInputStream.mCryptor
_OBJC_IVAR_$_SFUCryptoInputStream.mOffset
_OBJC_IVAR_$_SFUCryptoOutputStream.mBaseStream
_OBJC_IVAR_$_SFUCryptoOutputStream.mComputeCrc32
_OBJC_IVAR_$_SFUCryptoOutputStream.mCrc32
_OBJC_IVAR_$_SFUCryptoOutputStream.mCryptor
_OBJC_IVAR_$_SFUCryptoOutputStream.mIsClosed
_OBJC_IVAR_$_SFUFileOutputStream.mFile
_OBJC_IVAR_$_SFUFileOutputStream.mPath
_OBJC_IVAR_$_SFUMemoryInputStream.mCurrent
_OBJC_IVAR_$_SFUMemoryInputStream.mData
_OBJC_IVAR_$_SFUMemoryInputStream.mEnd
_OBJC_IVAR_$_SFUMemoryInputStream.mStart
_OBJC_IVAR_$_SFUMemoryOutputStream.mData
_OBJC_IVAR_$_SFUMoveableFileOutputStream.mFd
_OBJC_IVAR_$_SFUMoveableFileOutputStream.mPath
_OBJC_IVAR_$_SFUOffsetInputStream.mInitialOffset
_OBJC_IVAR_$_SFUOffsetInputStream.mInputStream
_OBJC_IVAR_$_SFUOffsetOutputStream.mInitialOffset
_OBJC_IVAR_$_SFUOffsetOutputStream.mOutputStream
_OBJC_IVAR_$_SFUZipDeflateOutputStream.mDeflateStream
_OBJC_IVAR_$_SFUZipDeflateOutputStream.mOutBuffer
_OBJC_IVAR_$_SFUZipDeflateOutputStream.mOutputStream
_OBJC_IVAR_$_SFUZipFreeSpaceEntry.length
_OBJC_IVAR_$_SFUZipFreeSpaceEntry.offset
_OBJC_IVAR_$_SFUZipInflateInputStream.mCalculatedCrc
_OBJC_IVAR_$_SFUZipInflateInputStream.mCheckCrc
_OBJC_IVAR_$_SFUZipInflateInputStream.mInput
_OBJC_IVAR_$_SFUZipInflateInputStream.mIsFromZip
_OBJC_IVAR_$_SFUZipInflateInputStream.mOffset
_OBJC_IVAR_$_SFUZipInflateInputStream.mOutBuffer
_OBJC_IVAR_$_SFUZipInflateInputStream.mOutBufferSize
_OBJC_IVAR_$_SFUZipInflateInputStream.mReachedEnd
_OBJC_IVAR_$_SFUZipInflateInputStream.mStream
_OBJC_IVAR_$_SFUZipOutputEntry.compressedDataOffset
_OBJC_IVAR_$_SFUZipOutputEntry.compressedSize
_OBJC_IVAR_$_SFUZipOutputEntry.crc
_OBJC_IVAR_$_SFUZipOutputEntry.is64Bit
_OBJC_IVAR_$_SFUZipOutputEntry.isCompressed
_OBJC_IVAR_$_SFUZipOutputEntry.isEncrypted
_OBJC_IVAR_$_SFUZipOutputEntry.isWrittenDirectlyToFile
_OBJC_IVAR_$_SFUZipOutputEntry.name
_OBJC_IVAR_$_SFUZipOutputEntry.offset
_OBJC_IVAR_$_SFUZipOutputEntry.time
_OBJC_IVAR_$_SFUZipOutputEntry.uncompressedSize
_OBJC_IVAR_$_SFUZipOutputEntry.utf8NameLength
_OBJC_METACLASS_$_AEAnnotation
_OBJC_METACLASS_$_AEAnnotationAccessibility
_OBJC_METACLASS_$_AEAnnotationActivityItemProviderSource
_OBJC_METACLASS_$_AEAnnotationBlockFilter
_OBJC_METACLASS_$_AEAnnotationFacebookActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationGroupHTMLActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationGroupHTMLGenerator
_OBJC_METACLASS_$_AEAnnotationGroupPrintActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationGroupRTFActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationGroupRTFGenerator
_OBJC_METACLASS_$_AEAnnotationHTMLActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationManagedObjectContext
_OBJC_METACLASS_$_AEAnnotationPredicateFilter
_OBJC_METACLASS_$_AEAnnotationPrintActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationProvider
_OBJC_METACLASS_$_AEAnnotationSerializationManager
_OBJC_METACLASS_$_AEAnnotationSocialActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationStringFilter
_OBJC_METACLASS_$_AEAnnotationTextActivityItemProvider
_OBJC_METACLASS_$_AEAnnotationTheme
_OBJC_METACLASS_$_AEAnnotationThemeBlue
_OBJC_METACLASS_$_AEAnnotationThemeGreen
_OBJC_METACLASS_$_AEAnnotationThemePink
_OBJC_METACLASS_$_AEAnnotationThemePurple
_OBJC_METACLASS_$_AEAnnotationThemeUnderline
_OBJC_METACLASS_$_AEAnnotationThemeYellow
_OBJC_METACLASS_$_AEAnnotationTwitterWeiboActivityItemProvider
_OBJC_METACLASS_$_AEAssetActivityItemProvider
_OBJC_METACLASS_$_AEAssetActivityItemProviderSource
_OBJC_METACLASS_$_AEAssetAttachmentActivityItemProvider
_OBJC_METACLASS_$_AEAssetFacebookActivityItemProvider
_OBJC_METACLASS_$_AEAssetHTMLActivityItemProvider
_OBJC_METACLASS_$_AEAssetHTMLGenerator
_OBJC_METACLASS_$_AEAssetMailActivityItemProvider
_OBJC_METACLASS_$_AEAssetTextActivityItemProvider
_OBJC_METACLASS_$_AEAssetTwitterWeiboActivityItemProvider
_OBJC_METACLASS_$_AESingleAnnotationHTMLGenerator
_OBJC_METACLASS_$_AESingleBookMetadataProvider
_OBJC_METACLASS_$_AEUserPublishing
_OBJC_METACLASS_$_AEUserPublishingLookUpRequest
_OBJC_METACLASS_$_AEUserPublishingProductProfile
_OBJC_METACLASS_$_BKAssetActivityPropertySource
_OBJC_METACLASS_$_BKAssetUtilities
_OBJC_METACLASS_$_BKSeriesCheck
_OBJC_METACLASS_$_BKSeriesDatabase
_OBJC_METACLASS_$_BKSeriesDatabaseManagedObjectContext
_OBJC_METACLASS_$_BKSeriesFolderLayer
_OBJC_METACLASS_$_BKSeriesInfo
_OBJC_METACLASS_$_BKSeriesItem
_OBJC_METACLASS_$_BKSeriesManager
_OBJC_METACLASS_$_BKSeriesManagerUpdater
_OBJC_METACLASS_$_IMAccessibilitySafeCategory
_OBJC_METACLASS_$_IMActivityController
_OBJC_METACLASS_$_IMAdminTable
_OBJC_METACLASS_$_IMAssertionHandler
_OBJC_METACLASS_$_IMAssetViewerPlugInInstanceDescriptor
_OBJC_METACLASS_$_IMBlockActivityItemProvider
_OBJC_METACLASS_$_IMBloomFilter
_OBJC_METACLASS_$_IMCommonCoreAccessibility
_OBJC_METACLASS_$_IMCommonCoreBundleLookupClass
_OBJC_METACLASS_$_IMCoreDataSource
_OBJC_METACLASS_$_IMDatabaseCursor
_OBJC_METACLASS_$_IMDatabaseHandle
_OBJC_METACLASS_$_IMDevice
_OBJC_METACLASS_$_IMDocumentFragmentFilter
_OBJC_METACLASS_$_IMGraphicsUtilities
_OBJC_METACLASS_$_IMImageCache
_OBJC_METACLASS_$_IMImageCacheObject
_OBJC_METACLASS_$_IMJPEGPrefetch
_OBJC_METACLASS_$_IMLanguageUtilities
_OBJC_METACLASS_$_IMLibraryFragmentFilter
_OBJC_METACLASS_$_IMLibraryPlist
_OBJC_METACLASS_$_IMLogger
_OBJC_METACLASS_$_IMMappedKeyDataStore
_OBJC_METACLASS_$_IMMemoryCache
_OBJC_METACLASS_$_IMPersistentCache
_OBJC_METACLASS_$_IMPersistentCacheManager
_OBJC_METACLASS_$_IMPlatformAbstraction
_OBJC_METACLASS_$_IMPlugInDescriptor
_OBJC_METACLASS_$_IMPlugInInstanceDescriptor
_OBJC_METACLASS_$_IMPlugInManager
_OBJC_METACLASS_$_IMStopWatch
_OBJC_METACLASS_$_IMUbiquitousDataProvider
_OBJC_METACLASS_$_IMUbiquitousPersistentStoreLoader
_OBJC_METACLASS_$_IMUserAgent
_OBJC_METACLASS_$_IMUserDataCull
_OBJC_METACLASS_$_IMZipArchiveUtilities
_OBJC_METACLASS_$_Reachability
_OBJC_METACLASS_$_SFUBufferedInputStream
_OBJC_METACLASS_$_SFUCryptoInputStream
_OBJC_METACLASS_$_SFUCryptoKey
_OBJC_METACLASS_$_SFUCryptoOutputStream
_OBJC_METACLASS_$_SFUCryptoUtils
_OBJC_METACLASS_$_SFUCryptor
_OBJC_METACLASS_$_SFUDataRepresentation
_OBJC_METACLASS_$_SFUFileDataRepresentation
_OBJC_METACLASS_$_SFUFileInputStream
_OBJC_METACLASS_$_SFUFileOutputStream
_OBJC_METACLASS_$_SFUMemoryInputStream
_OBJC_METACLASS_$_SFUMemoryOutputStream
_OBJC_METACLASS_$_SFUMoveableFileOutputStream
_OBJC_METACLASS_$_SFUOffsetInputStream
_OBJC_METACLASS_$_SFUOffsetOutputStream
_OBJC_METACLASS_$_SFUZipArchive
_OBJC_METACLASS_$_SFUZipArchiveFileDataRepresentation
_OBJC_METACLASS_$_SFUZipArchiveMemoryDataRepresentation
_OBJC_METACLASS_$_SFUZipArchiveOutputStream
_OBJC_METACLASS_$_SFUZipDeflateOutputStream
_OBJC_METACLASS_$_SFUZipEntry
_OBJC_METACLASS_$_SFUZipException
_OBJC_METACLASS_$_SFUZipFreeSpaceEntry
_OBJC_METACLASS_$_SFUZipInflateInputStream
_OBJC_METACLASS_$_SFUZipOutputEntry
_OBJC_METACLASS_$_SFUZipRecordInputStream
_OBJC_METACLASS_$__IMMemoryCacheItem
_OBJC_METACLASS_$___AEAnnotationAccessibility_super
_OBJC_METACLASS_$___IMAccessibilityValidateBlockSignatureSentinel
_OBJC_METACLASS_$___IMAccessibilityVerboseTypeEncodingGroup
_SFUDeriveAes128Key
_SFUDup
_SFUEqualCryptoKeys
_SFUFdOpen
_SFUFileOpen
_SFUFileUtilsErrnoKey
_SFUGingerM3KeyDerivationIterationCount
_SFUHash
_SFUHashWithSeed
_SFUOpen
_SFUSageKeyDerivationIterationCount
_SFUSimpleXmlOutputCloseCallback
_SFUSimpleXmlOutputWriteCallback
_SFUZip64EndOfCentralDirectoryFixedSize
_SFUZip64EndOfCentralDirectoryLocatorSignature
_SFUZip64EndOfCentralDirectoryLocatorSize
_SFUZip64EndOfCentralDirectorySignature
_SFUZip64LocalExtraFieldSize
_SFUZipCentralFileHeaderFixedSize
_SFUZipCentralFileHeaderSignature
_SFUZipCurrentDosTime
_SFUZipDataDescriptorSignature
_SFUZipDataDescriptorSize
_SFUZipDeflateBufferSize
_SFUZipDeflateCompressionLevel
_SFUZipEncryptedDocumentUuidExtraFieldSignature
_SFUZipEndOfCentralDirectoryFixedSize
_SFUZipEndOfCentralDirectoryMaxSize
_SFUZipEndOfCentralDirectorySignature
_SFUZipFreeSpaceEntryNameFormat
_SFUZipFreeSpaceEntryNameLength
_SFUZipInflateBufferMaxSize
_SFUZipLocalFileHeaderFixedSize
_SFUZipLocalFileHeaderSignature
_SFUZipMaxRecordFixedSize
_SFUZipPassphraseHintExtraFieldSignature
_SFUZipPassphraseVerifierExtraFieldSignature
_SFUZipRecordSignatureSize
_SFUZipVersionMadeBy
_SFUZipVersionNeededToExtract
_SetBookFormatByExtensionCB
___IMAccessibilityCastAsClass
___IMAccessibilityCastAsProtocol
___IMAccessibilityCastAsSafeCategory
___IMAccessibilityGetAssociatedBool
___IMAccessibilityGetAssociatedCGFloat
___IMAccessibilityGetAssociatedInteger
___IMAccessibilityGetAssociatedObject
___IMAccessibilityGetAssociatedRange
___IMAccessibilityGetAssociatedTimeInterval
___IMAccessibilityGetAssociatedUnsignedInteger
___IMAccessibilityHandleValidationErrorWithDescription
___IMAccessibilityPerformSafeBlock
___IMAccessibilitySafeIvarForKey
___IMAccessibilitySetAssociatedBool
___IMAccessibilitySetAssociatedCGFloat
___IMAccessibilitySetAssociatedCopiedObject
___IMAccessibilitySetAssociatedInteger
___IMAccessibilitySetAssociatedNonRetainedObject
___IMAccessibilitySetAssociatedObject
___IMAccessibilitySetAssociatedRange
___IMAccessibilitySetAssociatedTimeInterval
___IMAccessibilitySetAssociatedUnsignedInteger
___IMAccessibilityStringForVariables
___IMAccessibilityStringForVariablesSentinel
___IMAccessibilityValidateBlockSignature
___IMAccessibilityValidateClass
___IMAccessibilityValidateClassMethod
___IMAccessibilityValidateClassMethodComplete
___IMAccessibilityValidateInstanceMethod
___IMAccessibilityValidateInstanceMethodComplete
___IMAccessibilityValidateIsKindOfClass
___IMAccessibilityValidateIvar
___IMAccessibilityValidateIvarType
___IMAccessibilityValidateMethodSignature
___IMAccessibilityValidateProperty
___IMAccessibilityValidateProtocolMethod
___IMAccessibilityValidateProtocolProperty
___IMAccessibilityValidateSymbol
___imax_verbose_encode_with_type_encoding_group_class
_foldQuoteMark
_im_expandedItemSourcesFromItemSource
_isARMv6
_isApex
_isApexOrEarlier
_isApexOrLater
_isBaker
_isBakerOrEarlier
_isBakerOrLater
_isBrighton
_isBrightonOrEarlier
_isBrightonOrLater
_isDurango
_isDurangoOrEarlier
_isDurangoOrLater
_isHoodoo
_isHoodooOrEarlier
_isHoodooOrLater
_isInnsbruck
_isInnsbruckOrEarlier
_isInnsbruckOrLater
_isJasper
_isJasperOrEarlier
_isJasperOrLater
_isK48
_isLandscape
_isLargePhone
_isMac
_isMegaPhone
_isMulticore
_isMultitaskingSupported
_isN18
_isN88
_isPad
_isPhone
_isPortrait
_isRetina
_isShortPhone
_isSochi
_isSochiOrEarlier
_isSochiOrLater
_isSundance
_isSundanceOrEarlier
_isSundanceOrLater
_isSuperRetina
_isTallPhone
_isTelluride
_isTellurideOrEarlier
_isTellurideOrLater
_isTouch
_isTruePortrait
_isWildcat
_isWildcatOrEarlier
_isWildcatOrLater
_k09EncryptionVersion
_kAEAnnotationAnnotationModificationDateKey
_kAEAnnotationAnnotationVersionKey
_kAEAnnotationAssetVersionKey
_kAEAnnotationAttachmentsKey
_kAEAnnotationChapterTitleKey
_kAEAnnotationCreatorIdenfitier_iTunesU
_kAEAnnotationCreatorIdenfitier_iTunesU_AV
_kAEAnnotationCreatorIdentifier_iBooks
_kAEAnnotationCreatorIdentifier_iBooks_audiobooks
_kAEAnnotationCreatorIdentifier_iBooks_textbooks
_kAEAnnotationPhysicalPageNumber
_kAEAnnotationProviderPeerFilePathSeparator
_kAEAnnotationProviderUbiquityPeerIDOverrideKey
_kAEAnnotationReadingProgressHighWaterMark
_kAEAnnotationSearchDefaultFields
_kAEAnnotationSearchDefaultOptions
_kAEAnnotationSelectedTextRangeKey
_kAEAnnotationStyleAttributeName
_kAEAnnotationUserModificationDateKey
_kAEAnnotationVersion_1
_kAEAnnotationVersion_2
_kAEAnnotationVersion_3
_kAEAnnotationVersion_4
_kAEAnnotationVersion_Current
_kAEAssetActivityItemProviderPropertyAssetCover
_kAEAssetActivityItemProviderPropertyAuthor
_kAEAssetActivityItemProviderPropertyBookPath
_kAEAssetActivityItemProviderPropertyEpubId
_kAEAssetActivityItemProviderPropertyGenre
_kAEAssetActivityItemProviderPropertyIsContentProtected
_kAEAssetActivityItemProviderPropertyIsSeriesContainer
_kAEAssetActivityItemProviderPropertyLanguage
_kAEAssetActivityItemProviderPropertyPublisherLocation
_kAEAssetActivityItemProviderPropertyPublisherName
_kAEAssetActivityItemProviderPropertyPublisherYear
_kAEAssetActivityItemProviderPropertyStoreId
_kAEAssetActivityItemProviderPropertyStoreShortUrl
_kAEAssetActivityItemProviderPropertyStoreUrl
_kAEAssetActivityItemProviderPropertyTitle
_kAEAssetActivityItemProviderPropertyVersion
_kAEAssetHTMLGeneratorBookInfoSectionPlaceholder
_kAEAssetHTMLGeneratorChapter
_kAEAssetHTMLGeneratorDate
_kAEAssetHTMLGeneratorDisclaimerSectionPlaceholder
_kAEAssetHTMLGeneratorInsertionHeaderPlaceholder
_kAEAssetHTMLGeneratorReadingDirection
_kAEAssetHTMLGeneratorStoreURL
_kAEAssetHTMLGeneratorStylePlaceholder
_kAEUserPublishingLookProfileLockUp
_kAEUserPublishingLookProfileProduct
_kAEUserPublishingLookProfileURL
_kARGB1555Type
_kAnnotationsUpdateVersion
_kAnnotationsUpdateVersionKey
_kBKAssetHelperDRMErrorDomain
_kBKAssetHelperErrorCodeBigBlueBlob
_kBKAssetHelperErrorDomain
_kBKAssetHelperErrorMissingCoverPath
_kBKAssetHelperErrorMissingITunesMetadata
_kBKAssetHelperParseFailedErrorDomain
_kBookmarkGenerationKey
_kCMDatabaseHandleBlobType
_kCMDatabaseHandleCommitNotification
_kCMDatabaseHandleDateType
_kCMDatabaseHandleFloatType
_kCMDatabaseHandleIntegerPrimaryKey
_kCMDatabaseHandleIntegerType
_kCMDatabaseHandleNullType
_kCMDatabaseHandleTextType
_kCMDatabaseHandleUndeclaredType
_kDatabaseVersion
_kDefaultFontName
_kDefaultFontSize
_kEmailBodyPrefix
_kGingerM3EncryptionVersion
_kIMCoreDataSourceSortOrderInitialGap
_kIMDurationNumberFormatterKey
_kIMLibraryPlistArtworkName
_kIMLibraryPlistMetadataName
_kIMUTITypeApplication
_kIMUTITypeAudio
_kIMUTITypeData
_kIMUTITypeEpub
_kIMUTITypeExcel
_kIMUTITypeFileURL
_kIMUTITypeHTML
_kIMUTITypeImage
_kIMUTITypeKeynote
_kIMUTITypeMovie
_kIMUTITypeNumbers
_kIMUTITypePDF
_kIMUTITypePages
_kIMUTITypePowerPoint
_kIMUTITypeRTF
_kIMUTITypeText
_kIMUTITypeURL
_kIMUTITypeWebArchive
_kIMUTITypeWord
_kIMUbiquitousDataProviderDebug
_kIMUbiquitousDataProviderDidChangePersistentStoreNotification
_kIMUbiquitousDataProviderDidUpdateDataNotification
_kIMUbiquitousDataProviderUUIDFileStringEncoding
_kIMUbiquitousPersistentStoreLoaderMobileDocumentsPath
_kIMUbiquitousPersistentStoreLoaderPeerIDOverrideKey
_kIMUbiquitousPersistentStoreLoaderSharedDataRepositoryPath
_kJPGType
_kMaxModificationTimeIntervalSince1970
_kNoteFontName
_kPNGType
_kStoreShortURLPrefix
_kStoreURLPrefix
_kUbiquitousContentName
_kUbiquityPeerIDOverrideKey
_kUbiquityStoreIdentifier
_pbkdf2
_CCCryptorCreate
_CCCryptorFinal
_CCCryptorGetOutputLength
_CCCryptorRelease
_CCCryptorUpdate
_CCHmac
_CC_MD5_Final
_CC_MD5_Init
_CC_MD5_Update
_CC_SHA1
_CC_SHA1_Final
_CC_SHA1_Init
_CC_SHA1_Update
_CC_SHA256_Final
_CC_SHA256_Init
_CC_SHA256_Update
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFAutorelease
_CFGetTypeID
_CFLocaleCopyCurrent
_CFPreferencesGetAppBooleanValue
_CFRelease
_CFRetain
_CFRunLoopGetCurrent
_CFStringConvertEncodingToNSStringEncoding
_CFStringCreateArrayWithFindResults
_CFStringCreateMutableCopy
_CFStringCreateWithCharacters
_CFStringCreateWithSubstring
_CFStringGetCStringPtr
_CFStringGetCharacters
_CFStringGetCharactersPtr
_CFStringGetLength
_CFStringGetSystemEncoding
_CFStringLowercase
_CFStringReplace
_CFStringTokenizerAdvanceToNextToken
_CFStringTokenizerCreate
_CFStringTokenizerGetCurrentTokenRange
_CFStringTransform
_CFStringUppercase
_CFURLCreateStringByAddingPercentEscapes
_CFURLCreateStringByReplacingPercentEscapes
_CFUUIDCreate
_CFUUIDCreateString
_CGAffineTransformInvert
_CGAffineTransformMakeScale
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGBitmapContextGetData
_CGBitmapContextGetHeight
_CGBitmapContextGetWidth
_CGColorCreate
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceCreateWithName
_CGColorSpaceRelease
_CGContextClearRect
_CGContextConcatCTM
_CGContextDrawImage
_CGContextDrawPDFPage
_CGContextDrawRadialGradient
_CGContextFillRect
_CGContextRelease
_CGContextRestoreGState
_CGContextSaveGState
_CGContextScaleCTM
_CGContextSetInterpolationQuality
_CGContextSetRGBFillColor
_CGContextTranslateCTM
_CGDataProviderCreateSequential
_CGDataProviderCreateWithCFData
_CGDataProviderCreateWithData
_CGDataProviderCreateWithURL
_CGDataProviderRelease
_CGGradientCreateWithColorComponents
_CGGradientRelease
_CGImageCreate
_CGImageCreateWithImageInRect
_CGImageCreateWithJPEGDataProvider
_CGImageCreateWithPNGDataProvider
_CGImageDestinationAddImage
_CGImageDestinationCreateWithData
_CGImageDestinationFinalize
_CGImageGetBytesPerRow
_CGImageGetHeight
_CGImageGetWidth
_CGImageRelease
_CGImageRetain
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateWithURL
_CGPDFPageGetBoxRect
_CGPDFPageGetDrawingTransform
_CGPDFPageGetRotationAngle
_CGPathAddRect
_CGPathCreateMutable
_CGPathRelease
_CGPointZero
_CGRectDivide
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxX
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetMinX
_CGRectGetMinY
_CGRectGetWidth
_CGRectIntegral
_CGRectIntersection
_CGRectIsEmpty
_CGRectIsNull
_CGRectNull
_CGRectUnion
_CGRectZero
_CGSizeZero
_CKItemLookupKeyProfileLockup
_CKItemLookupKeyProfileURL
_NSAllMapTableKeys
_NSAllMapTableValues
_NSApp
_NSCalibratedRGBColorSpace
_NSCalibratedWhiteColorSpace
_NSClassFromString
_NSCocoaErrorDomain
_NSDefaultMallocZone
_NSDefaultRunLoopMode
_NSDeviceWhiteColorSpace
_NSFileHFSTypeCode
_NSFileModificationDate
_NSFileSize
_NSFontAttributeName
_NSGenericException
_NSInferMappingModelAutomaticallyOption
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSLinkAttributeName
_NSLog
_NSMallocException
_NSManagedObjectContextDidSaveNotification
_NSMergeByPropertyObjectTrumpMergePolicy
_NSMigratePersistentStoresAutomaticallyOption
_NSOSStatusErrorDomain
_NSParagraphStyleAttributeName
_NSPasteboardTypeRTF
_NSPasteboardTypeString
_NSPersistentStoreUbiquitousContentNameKey
_NSPersistentStoreUbiquitousContentURLKey
_NSProgressFileOperationKindCopying
_NSProgressFileOperationKindKey
_NSProgressFileURLKey
_NSProgressKindFile
_NSProtocolFromString
_NSRangeFromString
_NSSQLiteStoreType
_NSSearchPathForDirectoriesInDomains
_NSSelectorFromString
_NSStringFromClass
_NSStringFromProtocol
_NSStringFromRange
_NSStringFromSelector
_NSTemporaryDirectory
_NSURLIsDirectoryKey
_NSURLNameKey
_NSURLTotalFileAllocatedSizeKey
_NSURLUbiquitousItemIsUploadedKey
_NSUnionRange
_NSZeroRect
_NSZoneFree
_NSZoneMalloc
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CAShapeLayer
_OBJC_CLASS_$_CATransaction
_OBJC_CLASS_$_CIFilter
_OBJC_CLASS_$_CKBag
_OBJC_CLASS_$_CKItemLookupRequest
_OBJC_CLASS_$_CKItemLookupResponse
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributeDescription
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSCompoundPredicate
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSExpression
_OBJC_CLASS_$_NSExpressionDescription
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileCoordinator
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFont
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSHTTPURLResponse
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSManagedObjectModel
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableCharacterSet
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableOrderedSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSMutableURLRequest
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNotificationQueue
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSOrderedSet
_OBJC_CLASS_$_NSParagraphStyle
_OBJC_CLASS_$_NSPersistentStoreCoordinator
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSProgress
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRegularExpression
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSharingService
_OBJC_CLASS_$_NSSharingServicePicker
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLComponents
_OBJC_CLASS_$_NSURLConnection
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSView
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_METACLASS_$_CALayer
_OBJC_METACLASS_$_NSException
_OBJC_METACLASS_$_NSManagedObject
_OBJC_METACLASS_$_NSManagedObjectContext
_OBJC_METACLASS_$_NSObject
_OSAtomicAnd32Barrier
_OSAtomicCompareAndSwap32Barrier
_OSAtomicOr32Barrier
_OSMemoryBarrier
_OSSpinLockLock
_OSSpinLockUnlock
_SCNetworkReachabilityCreateWithAddress
_SCNetworkReachabilityCreateWithName
_SCNetworkReachabilityGetFlags
_SCNetworkReachabilityScheduleWithRunLoop
_SCNetworkReachabilitySetCallback
_SCNetworkReachabilityUnscheduleFromRunLoop
__Block_object_assign
__Block_object_dispose
__DefaultRuneLocale
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
__ZSt9terminatev
__ZdlPv
__Znam
___CFConstantStringClassReference
___bzero
___cxa_begin_catch
___cxa_guard_abort
___cxa_guard_acquire
___cxa_guard_release
___error
___gxx_personality_v0
___maskrune
___objc_personality_v0
___sincos_stret
___stack_chk_fail
___stack_chk_guard
___stdoutp
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_timer
__objc_empty_cache
_abort
_calloc
_ceil
_ceilf
_class_addMethod
_class_addProtocol
_class_copyMethodList
_class_copyPropertyList
_class_copyProtocolList
_class_getClassMethod
_class_getInstanceMethod
_class_getInstanceVariable
_class_getName
_class_getProperty
_class_getSuperclass
_close
_crc32
_deflate
_deflateEnd
_deflateInit2_
_dispatch_after
_dispatch_async
_dispatch_barrier_async
_dispatch_get_global_queue
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_notify
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_cancel_handler
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_dispatch_sync
_dispatch_time
_dispatch_walltime
_dlsym
_dup
_fclose
_fcntl
_fdopen
_floor
_fmax
_fmin
_fopen
_fputs
_fread
_free
_fseeko
_fsync
_ftello
_ftruncate
_fwrite
_getpid
_getxattr
_host_page_size
_host_statistics
_inflate
_inflateEnd
_inflateInit2_
_ivar_getOffset
_ivar_getTypeEncoding
_kCAGravityResizeAspect
_kCFAllocatorDefault
_kCFBundleNameKey
_kCFBundleVersionKey
_kCFRunLoopDefaultMode
_kCFStringTransformFullwidthHalfwidth
_kCFStringTransformStripDiacritics
_kCGColorSpaceSRGB
_kUTTypeJPEG
_kUTTypePNG
_localtime
_lseek
_mach_absolute_time
_mach_host_self
_mach_task_self_
_mach_timebase_info
_malloc
_malloc_good_size
_memchr
_memcmp
_memcpy
_memmove
_memset
_method_copyArgumentType
_method_copyReturnType
_method_getImplementation
_method_getName
_method_getNumberOfArguments
_method_getTypeEncoding
_method_setImplementation
_mkstemp
_objc_autorelease
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_copyStruct
_objc_destroyWeak
_objc_ehtype_vtable
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_getAssociatedObject
_objc_getProperty
_objc_loadWeakRetained
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setAssociatedObject
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_object_getClass
_object_getInstanceVariable
_open
_pread
_property_getName
_protocol_getMethodDescription
_protocol_getProperty
_pthread_mach_thread_np
_pthread_self
_qsort_b
_realloc
_round
_sel_getName
_setxattr
_sqlite3_bind_blob
_sqlite3_bind_double
_sqlite3_bind_int
_sqlite3_bind_int64
_sqlite3_bind_null
_sqlite3_bind_text
_sqlite3_clear_bindings
_sqlite3_close
_sqlite3_column_blob
_sqlite3_column_bytes
_sqlite3_column_count
_sqlite3_column_decltype
_sqlite3_column_double
_sqlite3_column_int64
_sqlite3_column_name
_sqlite3_column_text
_sqlite3_column_type
_sqlite3_db_handle
_sqlite3_errmsg
_sqlite3_exec
_sqlite3_finalize
_sqlite3_libversion
_sqlite3_open_v2
_sqlite3_prepare_v2
_sqlite3_reset
_sqlite3_step
_sscanf
_strcmp
_strdup
_strerror
_strlen
_strncasecmp
_strncmp
_strtoull
_sysctlbyname
_task_info
_time
_uname
_unlink
_write
_xmlCreatePushParserCtxt
_xmlFreeDoc
_xmlFreeParserCtxt
_xmlParseChunk
_xmlReaderForIO
dyld_stub_binder
