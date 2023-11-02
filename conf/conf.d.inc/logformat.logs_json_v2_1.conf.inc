log_format logs_json_v2_1 escape=json
'{'
  '"time_local":"$time_local",'
  '"time_iso8601":"$time_iso8601",'
  '"time_msec":"$msec",'
  '"time_iso8601_ms":"$time_iso8601_with_ms",'
  '"server_addr":"$server_addr",'
  '"nginx_logs":{'
    '"type":"nginx",'
    '"log_format":"logs_json_v2_1",'
    '"escape":"json",'
    '"version":"2.1"'
  '},'
  '"remote":{'
    '"remote_addr":"$remote_addr",'
    '"remote_user":"$remote_user_map"'
  '},'
  '"http":{'
    '"http_x_forwarded_for":"$http_x_forwarded_for_map",'
    '"http_referer":"$http_referer_map",'
    '"http_user_agent":"$http_user_agent_map",'
    '"http_host":"$http_host",'
    '"http_range":"$http_range_map"'
  '},'
  '"request":{'
    '"server_name":"$server_name",'
    '"request":"$request",'
    '"request_time":$request_time,'
    '"request_id":"$request_id",'
    '"request_length":$request_length,'
    '"scheme":"$scheme",'
    '"server_protocol":"$server_protocol",'
    '"version_http":"$version_http",'
    '"method":"$request_method"'
  '},'
  '"response":{'
    '"status":$status,'
    '"body_bytes_sent":$body_bytes_sent,'
    '"bytes_sent":$bytes_sent,'
    '"ratio":$ratio_map'
  '},'
  '"upstream":{'
    '"upstream_connect_time":$upstream_connect_time_map,'
    '"upstream_header_time":$upstream_header_time_map,'
    '"upstream_response_time":$upstream_response_time_map,'
    '"upstream_cache_status":"$upstream_cache_status_map",'
    '"upstream_addr":"$upstream_addr_map",'
    '"upstream_status":$upstream_status_map'
  '},'
  '"ssl":{'
    '"ssl_alpn_protocol":"$ssl_alpn_protocol_map",'
    '"ssl_cipher":"$ssl_cipher_map",'
    '"ssl_curve":"$ssl_curve_map",'
    '"ssl_early_data":"$ssl_early_data_map",'
    '"ssl_protocol":"$ssl_protocol_map",'
    '"ssl_server_name":"$ssl_server_name_map",'
    '"ssl_session_id":"$ssl_session_id_map",'
    '"ssl_session_reused":"$ssl_session_reused_map"'
  '}'
'}';