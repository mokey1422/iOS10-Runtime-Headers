/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSXPCContext : _LSQueryContext <_LSQueryResolving> {
    _LSLocalContext * _localContext;
    _LSQueryCache * _queryCache;
}

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_init;
- (id)_queryCache;
- (void)_resolveQueries:(id)arg1 synchronously:(bool)arg2 XPCConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3;

@end