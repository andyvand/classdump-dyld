+[HPDQuery queryWithScope:andString:]
-[HPDQuery initWithScope:andString:]
-[HPDQuery copyWithZone:]
-[HPDQuery dealloc]
-[HPDQuery encodeWithCoder:]
-[HPDQuery initWithCoder:]
-[HPDQuery description]
-[HPDQuery isEqual:]
-[HPDQuery queryString]
-[HPDQuery scope]
-[HPDQuery resultTypes]
-[HPDQuery setResultTypes:]
-[HPDQuery preferredLanguages]
-[HPDQuery setPreferredLanguages:]
-[HPDQuery options]
-[HPDQuery setOptions:]
-[HPDQuery limit]
-[HPDQuery setLimit:]
-[HPDQuery userInfo]
-[HPDQuery setUserInfo:]
-[HPDQuery queryID]
-[HPDQuery setQueryID:]
-[HPDQuery pid]
-[HPDQuery setPid:]
-[HPDQuery cancelled]
-[HPDQuery setCancelled:]
-[NSArray(HPDQueryAdditions) compactDescription]
+[HPDResult resultWithTitle:andType:]
-[HPDResult initWithTitle:andType:]
-[HPDResult copyWithZone:]
-[HPDResult dealloc]
-[HPDResult relevanceCompare:]
-[HPDResult titleCompare:]
-[HPDResult isEqual:]
-[HPDResult hash]
-[HPDResult elementValue]
-[HPDResult encodeWithCoder:]
-[HPDResult initWithCoder:]
-[HPDResult description]
+[HPDResult webScriptNameForSelector:]
+[HPDResult isSelectorExcludedFromWebScript:]
+[HPDResult isKeyExcludedFromWebScript:]
-[HPDResult url]
-[HPDResult summary]
-[HPDResult bookID]
-[HPDResult title]
-[HPDResult setTitle:]
-[HPDResult type]
-[HPDResult setType:]
-[HPDResult relevance]
-[HPDResult setRelevance:]
-[HPDResult payload]
-[HPDResult setPayload:]
-[HPDHelpBook init]
-[HPDHelpBook initWithPath:]
-[HPDHelpBook initWithID:andCacheDictionary:]
-[HPDHelpBook dealloc]
-[HPDHelpBook exactMatchPath]
-[HPDHelpBook setExactMatchPath:]
-[HPDHelpBook suggestionsPath]
-[HPDHelpBook setSuggestionsPath:]
-[HPDHelpBook iconURL]
-[HPDHelpBook setIconURL:]
-[HPDHelpBook _setPath:withLocalization:]
-[HPDHelpBook pathToLoadFrom]
-[HPDHelpBook setPathToLoadFrom:]
-[HPDHelpBook localizedDocumentRootPath]
-[HPDHelpBook resourcesRootPath]
-[HPDHelpBook pathToResourceAtRelativePath:]
-[HPDHelpBook _determineType]
-[HPDHelpBook _determineDefaultIconURL]
-[HPDHelpBook _determineExactMatchPlistPath]
-[HPDHelpBook _determineSuggestionsPlistPath]
-[HPDHelpBook _determineAccessPagePathForBookType:]
-[HPDHelpBook _dictionaryForPath:withLocalization:]
-[HPDHelpBook setPreferredLocalization:]
-[HPDHelpBook _dictionaryFromAccessPage:forBookType:]
+[HPDHelpBook _encodingOfXMLDocument:]
-[HPDHelpBook _dictionaryFromBundlePlistWithLocalization:]
-[HPDHelpBook _verifyString:existsInDictionary:]
-[HPDHelpBook _verifyBundleDictionary:containsAbsolutePathForKey:]
+[HPDHelpBook _appleTitleExistsInDoc:]
+[HPDHelpBook _parseMetasForXMLDocument:]
+[HPDHelpBook _findAccessPageInDirectoryAtPath:]
+[HPDHelpBook _determinePotentialAccessPages:forDirectory:]
+[HPDHelpBook _fullURLFromBasePath:toPartialPath:]
+[HPDHelpBook _URLFromBundleAtPath:toPartialPath:forLocalization:]
+[HPDHelpBook _xmlDocumentForFileAtPath:]
+[HPDHelpBook _findIndicesInDirectoryWithURL:]
-[HPDHelpBook isEqualToHelpBook:]
-[HPDHelpBook titleCompare:]
+[HPDHelpBook webScriptNameForSelector:]
+[HPDHelpBook isSelectorExcludedFromWebScript:]
+[HPDHelpBook isKeyExcludedFromWebScript:]
-[HPDHelpBook description]
-[HPDHelpBook encodeWithCoder:]
-[HPDHelpBook initWithCoder:]
-[HPDHelpBook _dictionaryForBook]
-[HPDHelpBook _populateFromKnownGoodDictionary:]
-[HPDHelpBook bookID]
-[HPDHelpBook setBookID:]
-[HPDHelpBook path]
-[HPDHelpBook title]
-[HPDHelpBook setTitle:]
-[HPDHelpBook kbURLString]
-[HPDHelpBook setKbURLString:]
-[HPDHelpBook kbProductString]
-[HPDHelpBook setKbProductString:]
-[HPDHelpBook stringEncoding]
-[HPDHelpBook setStringEncoding:]
-[HPDHelpBook indexPaths]
-[HPDHelpBook setIndexPaths:]
-[HPDHelpBook accessPagePath]
-[HPDHelpBook setAccessPagePath:]
-[HPDHelpBook type]
-[HPDHelpBook setType:]
-[HPDHelpBook remoteURL]
-[HPDHelpBook setRemoteURL:]
-[HPDHelpBook localization]
-[HPDHelpBook bundleVersion]
-[HPDHelpBook topiclistTemplatePath]
-[HPDHelpBook setTopiclistTemplatePath:]
-[HPDHelpBook topiclistCSSPath]
-[HPDHelpBook setTopiclistCSSPath:]
-[HPDHelpBook usesExternalViewer]
-[NSString(HPDHelpBookAdditions) fileURL]
-[NSString(HPDHelpBookAdditions) addSSLAsNecessary]
-[HPDClient dealloc]
-[HPDClient finalize]
-[HPDClient createServerPortIfNeeded]
-[HPDClient createLocalPortWithDelegate:]
-[HPDClient sendMessage:withData:withReply:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___44-[HPDClient sendMessage:withData:withReply:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[HPDClient bookWithIdentifier:]
-[HPDClient bookList]
-[HPDClient preferredLocalizations]
-[HPDClient performQuery:withDelegate:]
-[HPDClient cancelQuery:]
-[HPDClient collect]
-[HPDClient stop]
-[HPDClient abort]
+[HPDSearchManager sharedSearchManager]
-[HPDSearchManager init]
-[HPDSearchManager dealloc]
-[HPDSearchManager performQuery:withDelegate:]
-[HPDSearchManager cancelQuery:]
-[HPDSearchManager searchForString:inBooks:withDelegate:options:contextInfo:]
-[HPDSearchManager bookList]
-[HPDSearchManager bookWithIdentifier:]
-[HPDSearchManager bookContainingFileAtPath:]
-[HPDSearchResult title]
-[HPDSearchResult url]
+[HPDCacheManager remoteURLForLocalURL:inBookWithID:]
+[HPDCacheManager remoteURLForLocalURL:inBook:]
-[NSString(HelpDataExtensions) indexOfDifferenceWithString:options:]
GCC_except_table9
GCC_except_table23
GCC_except_table1
GCC_except_table6
___block_descriptor_tmp
_OBJC_IVAR_$_HPDSearchManager._client
_OBJC_IVAR_$_HPDSearchManager._listLock
_sURLStringsToSSLize
_sHPDSearchManager
_ANCHOR_RESULTS
_APPLE_FONT
_APPLE_FONT_DEFAULT_VALUE
_APPLE_ICON
_APPLE_ICON_DEFAULT_VALUE
_APPLE_ICON_TYPE_DEFAULT_VALUE
_APPLE_KB_PRODUCT
_APPLE_KB_PRODUCT_DEFAULT_VALUE
_APPLE_KB_URL
_APPLE_KB_URL_DEFAULT_VALUE
_APPLE_KB_VERSION
_APPLE_KB_VERSION_DEFAULT_VALUE
_APPLE_ORDER
_APPLE_SEARCH_RESULTS_FONT
_APPLE_SEARCH_RESULTS_FONT_DEFAULT_VALUE
_APPLE_TARGET
_APPLE_TARGET_DEFAULT_VALUE
_APPLE_TITLE
_APPLE_URL
_DAEMON_BUNDLE_ID
_FULLTEXT_RESULTS
_HELPINDEX_SUFFIX
_HPDCheckClass
_HPDHelpActionResult
_HPDHelpArticleResult
_HPDHelpSimilarSuggestionResult
_HPDHelpSuggestionResult
_HPDKnowledgeBaseResult
_HPDLocalCallBack
_HPDLog
_HPDQueryAnchorSearchOptionKey
_HPDQuerySearchAllBooksOptionKey
_HPDResultAbstractKey
_HPDResultBookIDKey
_HPDResultIndexIDKey
_HPDResultIsExactMatchKey
_HPDResultRelevanceKey
_HPDResultTitleKey
_HPDResultURLKey
_HPDResultUsesExternalViewerKey
_HPDResultsLimit
_HPDSeasideResult
_HPD_ERROR_DOMAIN
_KB_RESULTS
_OBJC_CLASS_$_HPDCacheManager
_OBJC_CLASS_$_HPDClient
_OBJC_CLASS_$_HPDHelpBook
_OBJC_CLASS_$_HPDQuery
_OBJC_CLASS_$_HPDResult
_OBJC_CLASS_$_HPDSearchManager
_OBJC_CLASS_$_HPDSearchResult
_OBJC_IVAR_$_HPDClient._serverPortRef
_OBJC_IVAR_$_HPDHelpBook._accessPagePath
_OBJC_IVAR_$_HPDHelpBook._alreadyCheckedMask
_OBJC_IVAR_$_HPDHelpBook._bookID
_OBJC_IVAR_$_HPDHelpBook._bundleVersion
_OBJC_IVAR_$_HPDHelpBook._exactMatchPath
_OBJC_IVAR_$_HPDHelpBook._iconURL
_OBJC_IVAR_$_HPDHelpBook._indexPaths
_OBJC_IVAR_$_HPDHelpBook._kbProductString
_OBJC_IVAR_$_HPDHelpBook._kbURLString
_OBJC_IVAR_$_HPDHelpBook._localization
_OBJC_IVAR_$_HPDHelpBook._path
_OBJC_IVAR_$_HPDHelpBook._pathToLoadFrom
_OBJC_IVAR_$_HPDHelpBook._remoteURL
_OBJC_IVAR_$_HPDHelpBook._stringEncoding
_OBJC_IVAR_$_HPDHelpBook._suggestionsPath
_OBJC_IVAR_$_HPDHelpBook._title
_OBJC_IVAR_$_HPDHelpBook._topiclistCSSPath
_OBJC_IVAR_$_HPDHelpBook._topiclistTemplatePath
_OBJC_IVAR_$_HPDHelpBook._type
_OBJC_IVAR_$_HPDHelpBook._usesExternalViewer
_OBJC_IVAR_$_HPDQuery._cancelled
_OBJC_IVAR_$_HPDQuery._limit
_OBJC_IVAR_$_HPDQuery._options
_OBJC_IVAR_$_HPDQuery._pid
_OBJC_IVAR_$_HPDQuery._preferredLanguages
_OBJC_IVAR_$_HPDQuery._queryID
_OBJC_IVAR_$_HPDQuery._queryString
_OBJC_IVAR_$_HPDQuery._resultTypes
_OBJC_IVAR_$_HPDQuery._scope
_OBJC_IVAR_$_HPDQuery._userInfo
_OBJC_IVAR_$_HPDResult._payload
_OBJC_IVAR_$_HPDResult._relevance
_OBJC_IVAR_$_HPDResult._title
_OBJC_IVAR_$_HPDResult._type
_OBJC_METACLASS_$_HPDCacheManager
_OBJC_METACLASS_$_HPDClient
_OBJC_METACLASS_$_HPDHelpBook
_OBJC_METACLASS_$_HPDQuery
_OBJC_METACLASS_$_HPDResult
_OBJC_METACLASS_$_HPDSearchManager
_OBJC_METACLASS_$_HPDSearchResult
_SEARCH_RESULTS_DIRECTORY
_clientPortNameForThisTask
_gHPDLoggingLevel
_helpDirSort
_CFLocaleCopyCurrent
_CFLocaleCopyPreferredLanguages
_CFMakeCollectable
_CFMessagePortCreatePerProcessLocal
_CFMessagePortCreateRemote
_CFMessagePortCreateRunLoopSource
_CFMessagePortGetName
_CFMessagePortInvalidate
_CFMessagePortIsValid
_CFMessagePortSendRequest
_CFPreferencesGetAppIntegerValue
_CFRelease
_CFRunLoopAddSource
_CFRunLoopGetMain
_CFStringConvertEncodingToNSStringEncoding
_CFStringConvertIANACharSetNameToEncoding
_CFURLCreateStringByAddingPercentEscapes
_NSFileHFSCreatorCode
_NSFileHFSTypeCode
_NSLog
_NSLogv
_NSStringFromRange
_NSStringFromSelector
_NSURLIsDirectoryKey
_NSURLIsRegularFileKey
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSXMLDocument
_OBJC_CLASS_$_NSXMLElement
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
_dispatch_get_global_queue
_dispatch_semaphore_create
_dispatch_sync
_free
_getpid
_kCFBundleIdentifierKey
_kCFRunLoopCommonModes
_kCFRunLoopDefaultMode
_malloc
_objc_assign_ivar
_objc_assign_strongCast
_objc_atomicCompareAndSwapGlobalBarrier
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty
_random
_srandomdev
dyld_stub_binder
