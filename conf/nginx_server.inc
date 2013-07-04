location / {  
  include /opt/apps/nginx/conf/uwsgi_params;
  uwsgi_pass 127.0.0.1:9090;
} 
